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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/NormQueryItem.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Slow SQL logs
                */
                class SlowLogDetail : public AbstractModel
                {
                public:
                    SlowLogDetail();
                    ~SlowLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total consumption time.
                     * @return TotalTime Total consumption time.
                     * 
                     */
                    double GetTotalTime() const;

                    /**
                     * 设置Total consumption time.
                     * @param _totalTime Total consumption time.
                     * 
                     */
                    void SetTotalTime(const double& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取Total number of calls.
                     * @return TotalCallTimes Total number of calls.
                     * 
                     */
                    int64_t GetTotalCallTimes() const;

                    /**
                     * 设置Total number of calls.
                     * @param _totalCallTimes Total number of calls.
                     * 
                     */
                    void SetTotalCallTimes(const int64_t& _totalCallTimes);

                    /**
                     * 判断参数 TotalCallTimes 是否已赋值
                     * @return TotalCallTimes 是否已赋值
                     * 
                     */
                    bool TotalCallTimesHasBeenSet() const;

                    /**
                     * 获取Slow SQL.
                     * @return NormalQuerys Slow SQL.
                     * 
                     */
                    std::vector<NormQueryItem> GetNormalQuerys() const;

                    /**
                     * 设置Slow SQL.
                     * @param _normalQuerys Slow SQL.
                     * 
                     */
                    void SetNormalQuerys(const std::vector<NormQueryItem>& _normalQuerys);

                    /**
                     * 判断参数 NormalQuerys 是否已赋值
                     * @return NormalQuerys 是否已赋值
                     * 
                     */
                    bool NormalQuerysHasBeenSet() const;

                private:

                    /**
                     * Total consumption time.
                     */
                    double m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * Total number of calls.
                     */
                    int64_t m_totalCallTimes;
                    bool m_totalCallTimesHasBeenSet;

                    /**
                     * Slow SQL.
                     */
                    std::vector<NormQueryItem> m_normalQuerys;
                    bool m_normalQuerysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_
