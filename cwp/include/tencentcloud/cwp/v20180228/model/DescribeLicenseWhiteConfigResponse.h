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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VersionWhiteConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseWhiteConfig response structure.
                */
                class DescribeLicenseWhiteConfigResponse : public AbstractModel
                {
                public:
                    DescribeLicenseWhiteConfigResponse();
                    ~DescribeLicenseWhiteConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Ultimate Edition configuration information</p>
                     * @return FlagShip <p>Ultimate Edition configuration information</p>
                     * 
                     */
                    VersionWhiteConfig GetFlagShip() const;

                    /**
                     * 判断参数 FlagShip 是否已赋值
                     * @return FlagShip 是否已赋值
                     * 
                     */
                    bool FlagShipHasBeenSet() const;

                    /**
                     * 获取<p>Pro Edition configuration information</p>
                     * @return Professional <p>Pro Edition configuration information</p>
                     * 
                     */
                    VersionWhiteConfig GetProfessional() const;

                    /**
                     * 判断参数 Professional 是否已赋值
                     * @return Professional 是否已赋值
                     * 
                     */
                    bool ProfessionalHasBeenSet() const;

                    /**
                     * 获取<p>Lightweight Edition configuration information</p>
                     * @return PrattWhitney <p>Lightweight Edition configuration information</p>
                     * 
                     */
                    VersionWhiteConfig GetPrattWhitney() const;

                    /**
                     * 判断参数 PrattWhitney 是否已赋值
                     * @return PrattWhitney 是否已赋值
                     * 
                     */
                    bool PrattWhitneyHasBeenSet() const;

                    /**
                     * 获取<p>License package configuration message</p>
                     * @return RASP <p>License package configuration message</p>
                     * 
                     */
                    VersionWhiteConfig GetRASP() const;

                    /**
                     * 判断参数 RASP 是否已赋值
                     * @return RASP 是否已赋值
                     * 
                     */
                    bool RASPHasBeenSet() const;

                    /**
                     * 获取<p>Log analysis configuration information</p>
                     * @return LOG <p>Log analysis configuration information</p>
                     * 
                     */
                    VersionWhiteConfig GetLOG() const;

                    /**
                     * 判断参数 LOG 是否已赋值
                     * @return LOG 是否已赋值
                     * 
                     */
                    bool LOGHasBeenSet() const;

                private:

                    /**
                     * <p>Ultimate Edition configuration information</p>
                     */
                    VersionWhiteConfig m_flagShip;
                    bool m_flagShipHasBeenSet;

                    /**
                     * <p>Pro Edition configuration information</p>
                     */
                    VersionWhiteConfig m_professional;
                    bool m_professionalHasBeenSet;

                    /**
                     * <p>Lightweight Edition configuration information</p>
                     */
                    VersionWhiteConfig m_prattWhitney;
                    bool m_prattWhitneyHasBeenSet;

                    /**
                     * <p>License package configuration message</p>
                     */
                    VersionWhiteConfig m_rASP;
                    bool m_rASPHasBeenSet;

                    /**
                     * <p>Log analysis configuration information</p>
                     */
                    VersionWhiteConfig m_lOG;
                    bool m_lOGHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEWHITECONFIGRESPONSE_H_
