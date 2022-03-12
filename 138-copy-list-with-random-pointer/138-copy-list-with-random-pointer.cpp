class Solution {
public:
	Node* copyRandomList(Node* head) {
		unordered_map<Node*, Node*> map;
		Node* temp = head;
		while (temp) {
			map[temp] = new Node(temp->val);
			temp = temp->next;
		}

		for (auto m: map) {
			(m.second)->next = ((m.first)->next) ? map[(m.first)->next] : nullptr;
			(m.second)->random = ((m.first)->random) ? map[(m.first)->random] : nullptr;
		}

		temp = map[head];
		return temp;
	}
};