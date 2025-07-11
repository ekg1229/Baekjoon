class Node(object):
    def __init__(self, value):
        self.value = value
        self.next = None

class SingleLinkedList:
    def __init__(self):
        # head
        self.head = None
    
    # 리스트 끝에 새 노드 추가
    def append(self, data):
        # 새 노드 생성
        new_node = Node(data)

        # 리스트 비었으면 새 노드를 head로 설정
        if self.head is None:
            self.head = new_node
            return
        
        # 리스트의 마지막 노드를 찾음
        last_node = self.head

        while last_node.next:
            last_node = last_node.next
        
        # 마지막 노드의 다음을 새 노드로 설정
        last_node.next = new_node
    
    # head에 새 노드 추가
    def prepend(self, data):
        # 새 노드 생성
        new_node = Node(data)

        # 새 노드의 다음을 현재 head로 설정
        new_node.next = self.head

        # head를 새 노드로 업데이트
        self.head = new_node
    
    # 주어진 키를 가진 첫 번째 노드를 삭제
    def delete_node(self, key):
        # 현재 노드를 머리로 설정
        current_node = self.head

        # 삭제할 노드가 머리에 있는 경우
        if current_node and current_node.data == key:
            self.head = current_node.next
            current_node = None
            return
        
        # 삭제할 노드 찾기
        previous_node = None
        while current_node and current_node.data != key:
            previous_node = current_node
            current_node = current_node.next
        
        # 삭제할 노드를 찾지 못한 경우
        if current_node is None:
            return
        
        # 이전 노드의 다음을 삭제할 노드의 다음으로 설정
        previous_node.next = current_node.next
        current_node = None

    # 주어진 키를 가진 노드를 검색
    def search(self, key):
        # 현재 노드를 머리로 설정
        current_node = self.head

        # 노드를 순회하며 키 탐색
        while current_node and current_node.data != key:
            current_node = current_node.next
        return current_node is not None
    
    # 리스트의 모든 노드를 순회하며 데이터 출력
    def print_list(self):
        # 현재 노드를 머리로 설정
        current_node = self.head

        # 노드를 순회하며 데이터 값 출력
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")
