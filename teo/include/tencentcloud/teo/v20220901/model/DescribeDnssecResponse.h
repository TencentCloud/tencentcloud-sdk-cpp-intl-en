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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnssecInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDnssec response structure.
                */
                class DescribeDnssecResponse : public AbstractModel
                {
                public:
                    DescribeDnssecResponse();
                    ~DescribeDnssecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The DNSSEC status. Values:
<li>`enabled`: Enabled</li>
<li>`disabled`: Disabled</li>
                     * @return Status The DNSSEC status. Values:
<li>`enabled`: Enabled</li>
<li>`disabled`: Disabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The DNSSEC information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DnssecInfo The DNSSEC information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DnssecInfo GetDnssecInfo() const;

                    /**
                     * 判断参数 DnssecInfo 是否已赋值
                     * @return DnssecInfo 是否已赋值
                     */
                    bool DnssecInfoHasBeenSet() const;

                    /**
                     * 获取The update time of the site information.
                     * @return ModifiedOn The update time of the site information.
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * The DNSSEC status. Values:
<li>`enabled`: Enabled</li>
<li>`disabled`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The DNSSEC information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DnssecInfo m_dnssecInfo;
                    bool m_dnssecInfoHasBeenSet;

                    /**
                     * The update time of the site information.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_
