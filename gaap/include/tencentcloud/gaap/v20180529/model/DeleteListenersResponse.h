/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteListeners response structure.
                */
                class DeleteListenersResponse : public AbstractModel
                {
                public:
                    DeleteListenersResponse();
                    ~DeleteListenersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of listeners failed to be deleted
                     * @return OperationFailedListenerSet ID list of listeners failed to be deleted
                     * 
                     */
                    std::vector<std::string> GetOperationFailedListenerSet() const;

                    /**
                     * 判断参数 OperationFailedListenerSet 是否已赋值
                     * @return OperationFailedListenerSet 是否已赋值
                     * 
                     */
                    bool OperationFailedListenerSetHasBeenSet() const;

                    /**
                     * 获取ID list of listeners deleted successfully
                     * @return OperationSucceedListenerSet ID list of listeners deleted successfully
                     * 
                     */
                    std::vector<std::string> GetOperationSucceedListenerSet() const;

                    /**
                     * 判断参数 OperationSucceedListenerSet 是否已赋值
                     * @return OperationSucceedListenerSet 是否已赋值
                     * 
                     */
                    bool OperationSucceedListenerSetHasBeenSet() const;

                    /**
                     * 获取ID list of invalid listeners. For example: the listener does not exist, or the instance corresponding to the listener does not match.
                     * @return InvalidStatusListenerSet ID list of invalid listeners. For example: the listener does not exist, or the instance corresponding to the listener does not match.
                     * 
                     */
                    std::vector<std::string> GetInvalidStatusListenerSet() const;

                    /**
                     * 判断参数 InvalidStatusListenerSet 是否已赋值
                     * @return InvalidStatusListenerSet 是否已赋值
                     * 
                     */
                    bool InvalidStatusListenerSetHasBeenSet() const;

                private:

                    /**
                     * ID list of listeners failed to be deleted
                     */
                    std::vector<std::string> m_operationFailedListenerSet;
                    bool m_operationFailedListenerSetHasBeenSet;

                    /**
                     * ID list of listeners deleted successfully
                     */
                    std::vector<std::string> m_operationSucceedListenerSet;
                    bool m_operationSucceedListenerSetHasBeenSet;

                    /**
                     * ID list of invalid listeners. For example: the listener does not exist, or the instance corresponding to the listener does not match.
                     */
                    std::vector<std::string> m_invalidStatusListenerSet;
                    bool m_invalidStatusListenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSRESPONSE_H_
