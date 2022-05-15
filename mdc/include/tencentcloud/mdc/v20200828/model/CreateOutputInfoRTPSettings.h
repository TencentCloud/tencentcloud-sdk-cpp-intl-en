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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFORTPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFORTPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputRTPSettingsDestinations.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The RTP configuration of the output to create.
                */
                class CreateOutputInfoRTPSettings : public AbstractModel
                {
                public:
                    CreateOutputInfoRTPSettings();
                    ~CreateOutputInfoRTPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The relay destination addresses. One or two addresses are allowed.
                     * @return Destinations The relay destination addresses. One or two addresses are allowed.
                     */
                    std::vector<CreateOutputRTPSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置The relay destination addresses. One or two addresses are allowed.
                     * @param Destinations The relay destination addresses. One or two addresses are allowed.
                     */
                    void SetDestinations(const std::vector<CreateOutputRTPSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取This parameter must be set to `none`.
                     * @return FEC This parameter must be set to `none`.
                     */
                    std::string GetFEC() const;

                    /**
                     * 设置This parameter must be set to `none`.
                     * @param FEC This parameter must be set to `none`.
                     */
                    void SetFEC(const std::string& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     */
                    bool FECHasBeenSet() const;

                    /**
                     * 获取The timeout period (ms).
                     * @return IdleTimeout The timeout period (ms).
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置The timeout period (ms).
                     * @param IdleTimeout The timeout period (ms).
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * The relay destination addresses. One or two addresses are allowed.
                     */
                    std::vector<CreateOutputRTPSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * This parameter must be set to `none`.
                     */
                    std::string m_fEC;
                    bool m_fECHasBeenSet;

                    /**
                     * The timeout period (ms).
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFORTPSETTINGS_H_
