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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Status of TAT service.
                */
                class RunAutomationServiceEnabled : public AbstractModel
                {
                public:
                    RunAutomationServiceEnabled();
                    ~RunAutomationServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable [Tencent Cloud Automation Tools](https://www.tencentcloud.com/document/product/1340?from_cn_redirect=1) service or not. Valid values: <br><li>TRUE: enables the TAT service <br><li>FALSE: disables the TAT service
                     * @return Enabled Enable [Tencent Cloud Automation Tools](https://www.tencentcloud.com/document/product/1340?from_cn_redirect=1) service or not. Valid values: <br><li>TRUE: enables the TAT service <br><li>FALSE: disables the TAT service
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Enable [Tencent Cloud Automation Tools](https://www.tencentcloud.com/document/product/1340?from_cn_redirect=1) service or not. Valid values: <br><li>TRUE: enables the TAT service <br><li>FALSE: disables the TAT service
                     * @param _enabled Enable [Tencent Cloud Automation Tools](https://www.tencentcloud.com/document/product/1340?from_cn_redirect=1) service or not. Valid values: <br><li>TRUE: enables the TAT service <br><li>FALSE: disables the TAT service
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Enable [Tencent Cloud Automation Tools](https://www.tencentcloud.com/document/product/1340?from_cn_redirect=1) service or not. Valid values: <br><li>TRUE: enables the TAT service <br><li>FALSE: disables the TAT service
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RUNAUTOMATIONSERVICEENABLED_H_
