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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * GetMetricLabelValues request structure.
                */
                class GetMetricLabelValuesRequest : public AbstractModel
                {
                public:
                    GetMetricLabelValuesRequest();
                    ~GetMetricLabelValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Time Series Topic id</p>
                     * @return TopicId <p>Time Series Topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Time Series Topic id</p>
                     * @param _topicId <p>Time Series Topic id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of time series label</p>
                     * @return LabelName <p>Name of time series label</p>
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置<p>Name of time series label</p>
                     * @param _labelName <p>Name of time series label</p>
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p>
                     * @return Start <p>Start time</p>
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置<p>Start time</p>
                     * @param _start <p>Start time</p>
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return End <p>End time.</p>
                     * 
                     */
                    uint64_t GetEnd() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _end <p>End time.</p>
                     * 
                     */
                    void SetEnd(const uint64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取<p>Label match rule</p>
                     * @return Match <p>Label match rule</p>
                     * 
                     */
                    std::vector<std::string> GetMatch() const;

                    /**
                     * 设置<p>Label match rule</p>
                     * @param _match <p>Label match rule</p>
                     * 
                     */
                    void SetMatch(const std::vector<std::string>& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * <p>Time Series Topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Name of time series label</p>
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * <p>Start time</p>
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    uint64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * <p>Label match rule</p>
                     */
                    std::vector<std::string> m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_
