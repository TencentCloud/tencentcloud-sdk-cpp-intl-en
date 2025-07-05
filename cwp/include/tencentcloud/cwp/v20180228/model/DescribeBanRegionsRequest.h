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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANREGIONSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBanRegions request structure.
                */
                class DescribeBanRegionsRequest : public AbstractModel
                {
                public:
                    DescribeBanRegionsRequest();
                    ~DescribeBanRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * @return Mode Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * @param _mode Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANREGIONSREQUEST_H_
