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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/LogInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SearchLog response structure.
                */
                class SearchLogResponse : public AbstractModel
                {
                public:
                    SearchLogResponse();
                    ~SearchLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of raw logs matching the retrieval criteria
                     * @return Count Number of raw logs matching the retrieval criteria
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Pass through the Context value returned by this API, which can access more logs later, with an expiration time of 1 hour.
                     * @return Context Pass through the Context value returned by this API, which can access more logs later, with an expiration time of 1 hour.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Whether all logs meeting the retrieval criteria have been returned. If not, use the Context parameter to retrieve more logs.
                     * @return ListOver Whether all logs meeting the retrieval criteria have been returned. If not, use the Context parameter to retrieve more logs.
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取Whether the returned data is the SQL analysis result
                     * @return Analysis Whether the returned data is the SQL analysis result
                     * 
                     */
                    bool GetAnalysis() const;

                    /**
                     * 判断参数 Analysis 是否已赋值
                     * @return Analysis 是否已赋值
                     * 
                     */
                    bool AnalysisHasBeenSet() const;

                    /**
                     * 获取Raw logs matching the retrieval criteria
                     * @return Data Raw logs matching the retrieval criteria
                     * 
                     */
                    std::vector<LogInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Number of raw logs matching the retrieval criteria
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Pass through the Context value returned by this API, which can access more logs later, with an expiration time of 1 hour.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether all logs meeting the retrieval criteria have been returned. If not, use the Context parameter to retrieve more logs.
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Whether the returned data is the SQL analysis result
                     */
                    bool m_analysis;
                    bool m_analysisHasBeenSet;

                    /**
                     * Raw logs matching the retrieval criteria
                     */
                    std::vector<LogInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGRESPONSE_H_
