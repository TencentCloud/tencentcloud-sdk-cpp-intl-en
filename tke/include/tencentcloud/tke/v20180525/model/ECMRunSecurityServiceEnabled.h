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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ECMRUNSECURITYSERVICEENABLED_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ECMRUNSECURITYSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ECM Cloud Workload Protection
                */
                class ECMRunSecurityServiceEnabled : public AbstractModel
                {
                public:
                    ECMRunSecurityServiceEnabled();
                    ~ECMRunSecurityServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _enabled Whether it is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取CWP version. Valid values: `0` (CWP Pro), `1` (CWP Pro)
                     * @return Version CWP version. Valid values: `0` (CWP Pro), `1` (CWP Pro)
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置CWP version. Valid values: `0` (CWP Pro), `1` (CWP Pro)
                     * @param _version CWP version. Valid values: `0` (CWP Pro), `1` (CWP Pro)
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * CWP version. Valid values: `0` (CWP Pro), `1` (CWP Pro)
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ECMRUNSECURITYSERVICEENABLED_H_
