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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySubscribeName request structure.
                */
                class ModifySubscribeNameRequest : public AbstractModel
                {
                public:
                    ModifySubscribeNameRequest();
                    ~ModifySubscribeNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Data subscription instance name. Length limit: [1,60]
                     * @return SubscribeName Data subscription instance name. Length limit: [1,60]
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置Data subscription instance name. Length limit: [1,60]
                     * @param _subscribeName Data subscription instance name. Length limit: [1,60]
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription instance name. Length limit: [1,60]
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_
