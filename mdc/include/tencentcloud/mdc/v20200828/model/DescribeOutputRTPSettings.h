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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/RTPAddressDestination.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * RTP configuration information of the queried output.
                */
                class DescribeOutputRTPSettings : public AbstractModel
                {
                public:
                    DescribeOutputRTPSettings();
                    ~DescribeOutputRTPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination address information list of RTP push.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Destinations Destination address information list of RTP push.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RTPAddressDestination> GetDestinations() const;

                    /**
                     * 设置Destination address information list of RTP push.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _destinations Destination address information list of RTP push.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDestinations(const std::vector<RTPAddressDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取Whether it is FEC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FEC Whether it is FEC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFEC() const;

                    /**
                     * 设置Whether it is FEC.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fEC Whether it is FEC.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IdleTimeout Idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置Idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _idleTimeout Idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Destination address information list of RTP push.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RTPAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Whether it is FEC.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fEC;
                    bool m_fECHasBeenSet;

                    /**
                     * Idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTPSETTINGS_H_
