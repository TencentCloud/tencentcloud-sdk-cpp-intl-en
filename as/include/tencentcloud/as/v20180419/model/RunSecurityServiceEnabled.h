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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RUNSECURITYSERVICEENABLED_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RUNSECURITYSERVICEENABLED_H_

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
                * This describes the information on the Cloud Security service
                */
                class RunSecurityServiceEnabled : public AbstractModel
                {
                public:
                    RunSecurityServiceEnabled();
                    ~RunSecurityServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable [Cloud Workload Protection Platform (CWPP)](https://intl.cloud.tencent.com/document/product/296?from_cn_redirect=1). Valid values:
<li>TRUE: enable CWPP.</li>
<li>FALSE: disable CWPP.</li>
Default value: TRUE.
                     * @return Enabled Whether to enable [Cloud Workload Protection Platform (CWPP)](https://intl.cloud.tencent.com/document/product/296?from_cn_redirect=1). Valid values:
<li>TRUE: enable CWPP.</li>
<li>FALSE: disable CWPP.</li>
Default value: TRUE.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable [Cloud Workload Protection Platform (CWPP)](https://intl.cloud.tencent.com/document/product/296?from_cn_redirect=1). Valid values:
<li>TRUE: enable CWPP.</li>
<li>FALSE: disable CWPP.</li>
Default value: TRUE.
                     * @param _enabled Whether to enable [Cloud Workload Protection Platform (CWPP)](https://intl.cloud.tencent.com/document/product/296?from_cn_redirect=1). Valid values:
<li>TRUE: enable CWPP.</li>
<li>FALSE: disable CWPP.</li>
Default value: TRUE.
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
                     * Whether to enable [Cloud Workload Protection Platform (CWPP)](https://intl.cloud.tencent.com/document/product/296?from_cn_redirect=1). Valid values:
<li>TRUE: enable CWPP.</li>
<li>FALSE: disable CWPP.</li>
Default value: TRUE.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RUNSECURITYSERVICEENABLED_H_
