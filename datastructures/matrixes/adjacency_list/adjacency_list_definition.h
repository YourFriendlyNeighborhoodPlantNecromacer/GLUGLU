#ifndef __ADJACENCY_LIST_DEFINITION_H__
#define __ADJACENCY_LIST_DEFINITION_H__

template <typename T>
adjacency_list<T>::adjacency_list() : vertecie_array(){}

template <typename T>
adjacency_list<T>::adjacency_list(int64_t size) : vertecie_array(size){}

template <typename T>
adjacency_list<T>::adjacency_list(const adjacency_list& other) : vertecie_array(other.vertecie_array){}

template <typename T>
adjacency_list<T>::~adjacency_list(){
    std::cout << "See ya next time, space cowboy" << std::endl;
}

template <typename T>
adjacency_list<T>& adjacency_list<T>::operator = (const adjacency_list& other){
    if(this==&other) return *this;
    this->vertecie_array = other.vertecie_array;
    return *this;
}

template <typename T>
bool adjacency_list<T>::is_empty(){
    return vertecie_array.is_empty();
}

template <typename T>
void adjacency_list<T>::insert(T new_vertex){
    vertecie_array.insert(new_vertex, vertecie_array->last_index);
}

template <typename T>
bool adjacency_list<T>::remove(int64_t index){
    return false;
}

template <typename T>
int64_t adjacency_list<T>::get_last_index(){
    return vertecie_array.get_last_index();
}

template <typename T>
bool adjacency_list<T>::edge_exists(int64_t from, int64_t to){
    vertecie_array.at(from); //custom .is_in operation needed. To hell with it making a class for this
}

template <typename T>
bool make_connection(int64_t from, int64_t to);

template <typename T>
bool break_connection(int64_t from, int64_t to);

template <typename T>
int64_t find_path(int64_t from, int64_t to);

template <typename T>
int64_t bfs(int64_t from, int64_t to);

template <typename T>
int64_t dfs(int64_t from, int64_t to);

template <typename T>
bool construct_from_file(const std::string &file_name);

template <typename T>
void dp();
#endif//__ADJACENCY_LIST_DEFINITION_H__
