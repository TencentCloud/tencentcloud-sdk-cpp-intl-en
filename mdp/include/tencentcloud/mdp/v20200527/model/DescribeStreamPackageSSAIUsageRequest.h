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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSSAIUsage request structure.
                */
                class DescribeStreamPackageSSAIUsageRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSSAIUsageRequest();
                    ~DescribeStreamPackageSSAIUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the channel id you want to query.
                     * @return ChannelIds Specifies the channel id you want to query.
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置Specifies the channel id you want to query.
                     * @param _channelIds Specifies the channel id you want to query.
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取Specifies the ad type you want to query. valid values: Preroll/Midroll. if empty, query all types by default.
                     * @return Types Specifies the ad type you want to query. valid values: Preroll/Midroll. if empty, query all types by default.
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置Specifies the ad type you want to query. valid values: Preroll/Midroll. if empty, query all types by default.
                     * @param _types Specifies the ad type you want to query. valid values: Preroll/Midroll. if empty, query all types by default.
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the channel id you want to query.
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * Specifies the ad type you want to query. valid values: Preroll/Midroll. if empty, query all types by default.
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_
