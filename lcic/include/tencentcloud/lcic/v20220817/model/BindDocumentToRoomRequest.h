/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BindDocumentToRoom request structure.
                */
                class BindDocumentToRoomRequest : public AbstractModel
                {
                public:
                    BindDocumentToRoomRequest();
                    ~BindDocumentToRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Room ID
                     * @return RoomId Room ID
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置Room ID
                     * @param _roomId Room ID
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Document ID
                     * @return DocumentId Document ID
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 设置Document ID
                     * @param _documentId Document ID
                     * 
                     */
                    void SetDocumentId(const std::string& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取Binding type. The default value is `0`. The backend passes through this parameter to clients so that the clients can implement business logic based on this parameter.
                     * @return BindType Binding type. The default value is `0`. The backend passes through this parameter to clients so that the clients can implement business logic based on this parameter.
                     * 
                     */
                    uint64_t GetBindType() const;

                    /**
                     * 设置Binding type. The default value is `0`. The backend passes through this parameter to clients so that the clients can implement business logic based on this parameter.
                     * @param _bindType Binding type. The default value is `0`. The backend passes through this parameter to clients so that the clients can implement business logic based on this parameter.
                     * 
                     */
                    void SetBindType(const uint64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * Room ID
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Document ID
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * Binding type. The default value is `0`. The backend passes through this parameter to clients so that the clients can implement business logic based on this parameter.
                     */
                    uint64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BINDDOCUMENTTOROOMREQUEST_H_
