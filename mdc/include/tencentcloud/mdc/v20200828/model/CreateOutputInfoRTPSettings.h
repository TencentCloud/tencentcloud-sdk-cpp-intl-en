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
                * Create the RTP configuration for the output of a media transmission stream.
                */
                class CreateOutputInfoRTPSettings : public AbstractModel
                {
                public:
                    CreateOutputInfoRTPSettings();
                    ~CreateOutputInfoRTPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination address. You can enter 1 to 2 addresses.
                     * @return Destinations Destination address. You can enter 1 to 2 addresses.
                     * 
                     */
                    std::vector<CreateOutputRTPSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置Destination address. You can enter 1 to 2 addresses.
                     * @param _destinations Destination address. You can enter 1 to 2 addresses.
                     * 
                     */
                    void SetDestinations(const std::vector<CreateOutputRTPSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取Can only be filled in with none.
                     * @return FEC Can only be filled in with none.
                     * 
                     */
                    std::string GetFEC() const;

                    /**
                     * 设置Can only be filled in with none.
                     * @param _fEC Can only be filled in with none.
                     * 
                     */
                    void SetFEC(const std::string& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                    /**
                     * 获取Idle timeout period, in milliseconds.
                     * @return IdleTimeout Idle timeout period, in milliseconds.
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置Idle timeout period, in milliseconds.
                     * @param _idleTimeout Idle timeout period, in milliseconds.
                     * 
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * Destination address. You can enter 1 to 2 addresses.
                     */
                    std::vector<CreateOutputRTPSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Can only be filled in with none.
                     */
                    std::string m_fEC;
                    bool m_fECHasBeenSet;

                    /**
                     * Idle timeout period, in milliseconds.
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFORTPSETTINGS_H_
