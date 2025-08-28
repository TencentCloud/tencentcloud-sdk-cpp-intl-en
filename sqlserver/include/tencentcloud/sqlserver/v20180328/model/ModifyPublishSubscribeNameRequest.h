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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyPublishSubscribeName request structure.
                */
                class ModifyPublishSubscribeNameRequest : public AbstractModel
                {
                public:
                    ModifyPublishSubscribeNameRequest();
                    ~ModifyPublishSubscribeNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Publish/subscribe ID.
                     * @return PublishSubscribeId Publish/subscribe ID.
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置Publish/subscribe ID.
                     * @param _publishSubscribeId Publish/subscribe ID.
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe name to be modified.
                     * @return PublishSubscribeName Publish/subscribe name to be modified.
                     * 
                     */
                    std::string GetPublishSubscribeName() const;

                    /**
                     * 设置Publish/subscribe name to be modified.
                     * @param _publishSubscribeName Publish/subscribe name to be modified.
                     * 
                     */
                    void SetPublishSubscribeName(const std::string& _publishSubscribeName);

                    /**
                     * 判断参数 PublishSubscribeName 是否已赋值
                     * @return PublishSubscribeName 是否已赋值
                     * 
                     */
                    bool PublishSubscribeNameHasBeenSet() const;

                private:

                    /**
                     * Publish/subscribe ID.
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * Publish/subscribe name to be modified.
                     */
                    std::string m_publishSubscribeName;
                    bool m_publishSubscribeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_
