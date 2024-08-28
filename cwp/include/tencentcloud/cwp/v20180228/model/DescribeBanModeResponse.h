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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/StandardModeConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBanMode response structure.
                */
                class DescribeBanModeResponse : public AbstractModel
                {
                public:
                    DescribeBanModeResponse();
                    ~DescribeBanModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * @return Mode Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Configuration of the standard blocking mode
                     * @return StandardModeConfig Configuration of the standard blocking mode
                     * 
                     */
                    StandardModeConfig GetStandardModeConfig() const;

                    /**
                     * 判断参数 StandardModeConfig 是否已赋值
                     * @return StandardModeConfig 是否已赋值
                     * 
                     */
                    bool StandardModeConfigHasBeenSet() const;

                private:

                    /**
                     * Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Configuration of the standard blocking mode
                     */
                    StandardModeConfig m_standardModeConfig;
                    bool m_standardModeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANMODERESPONSE_H_
