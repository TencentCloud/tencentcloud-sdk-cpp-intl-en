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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCSETTINGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneConfigParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeL7AccSetting response structure.
                */
                class DescribeL7AccSettingResponse : public AbstractModel
                {
                public:
                    DescribeL7AccSettingResponse();
                    ~DescribeL7AccSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Global configuration for site acceleration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ZoneSetting Global configuration for site acceleration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ZoneConfigParameters GetZoneSetting() const;

                    /**
                     * 判断参数 ZoneSetting 是否已赋值
                     * @return ZoneSetting 是否已赋值
                     * 
                     */
                    bool ZoneSettingHasBeenSet() const;

                private:

                    /**
                     * Global configuration for site acceleration.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ZoneConfigParameters m_zoneSetting;
                    bool m_zoneSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCSETTINGRESPONSE_H_
