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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ListenerBackend.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeTargets response structure.
                */
                class DescribeTargetsResponse : public AbstractModel
                {
                public:
                    DescribeTargetsResponse();
                    ~DescribeTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of real servers bound to the listener.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Listeners Information of real servers bound to the listener.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ListenerBackend> GetListeners() const;

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                private:

                    /**
                     * Information of real servers bound to the listener.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ListenerBackend> m_listeners;
                    bool m_listenersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETSRESPONSE_H_
