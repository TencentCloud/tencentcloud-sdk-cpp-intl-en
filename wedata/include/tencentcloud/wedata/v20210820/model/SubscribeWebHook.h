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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Group Robot Subscription Configuration
                */
                class SubscribeWebHook : public AbstractModel
                {
                public:
                    SubscribeWebHook();
                    ~SubscribeWebHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group Robot Type, currently supports Feishu
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HookType Group Robot Type, currently supports Feishu
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHookType() const;

                    /**
                     * 设置Group Robot Type, currently supports Feishu
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hookType Group Robot Type, currently supports Feishu
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHookType(const std::string& _hookType);

                    /**
                     * 判断参数 HookType 是否已赋值
                     * @return HookType 是否已赋值
                     * 
                     */
                    bool HookTypeHasBeenSet() const;

                    /**
                     * 获取Group Robot Webhook Address, configuration method refer to https://intl.cloud.tencent.com/document/product/1254/70736?from_cn_redirect=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HookAddress Group Robot Webhook Address, configuration method refer to https://intl.cloud.tencent.com/document/product/1254/70736?from_cn_redirect=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHookAddress() const;

                    /**
                     * 设置Group Robot Webhook Address, configuration method refer to https://intl.cloud.tencent.com/document/product/1254/70736?from_cn_redirect=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hookAddress Group Robot Webhook Address, configuration method refer to https://intl.cloud.tencent.com/document/product/1254/70736?from_cn_redirect=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHookAddress(const std::string& _hookAddress);

                    /**
                     * 判断参数 HookAddress 是否已赋值
                     * @return HookAddress 是否已赋值
                     * 
                     */
                    bool HookAddressHasBeenSet() const;

                private:

                    /**
                     * Group Robot Type, currently supports Feishu
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_hookType;
                    bool m_hookTypeHasBeenSet;

                    /**
                     * Group Robot Webhook Address, configuration method refer to https://intl.cloud.tencent.com/document/product/1254/70736?from_cn_redirect=1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_hookAddress;
                    bool m_hookAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_
