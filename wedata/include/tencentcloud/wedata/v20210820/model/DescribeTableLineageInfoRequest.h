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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableLineageInfo.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableLineageInfo request structure.
                */
                class DescribeTableLineageInfoRequest : public AbstractModel
                {
                public:
                    DescribeTableLineageInfoRequest();
                    ~DescribeTableLineageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query Direction, INPUT, OUTPUT, BOTH enumerated values
                     * @return Direction Query Direction, INPUT, OUTPUT, BOTH enumerated values
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Query Direction, INPUT, OUTPUT, BOTH enumerated values
                     * @param _direction Query Direction, INPUT, OUTPUT, BOTH enumerated values
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Table information
                     * @return Data Table information
                     * 
                     */
                    TableLineageInfo GetData() const;

                    /**
                     * 设置Table information
                     * @param _data Table information
                     * 
                     */
                    void SetData(const TableLineageInfo& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Single Query Indegree, default 1
                     * @return InputDepth Single Query Indegree, default 1
                     * 
                     */
                    int64_t GetInputDepth() const;

                    /**
                     * 设置Single Query Indegree, default 1
                     * @param _inputDepth Single Query Indegree, default 1
                     * 
                     */
                    void SetInputDepth(const int64_t& _inputDepth);

                    /**
                     * 判断参数 InputDepth 是否已赋值
                     * @return InputDepth 是否已赋值
                     * 
                     */
                    bool InputDepthHasBeenSet() const;

                    /**
                     * 获取Single Query Outdegree, default 1
                     * @return OutputDepth Single Query Outdegree, default 1
                     * 
                     */
                    int64_t GetOutputDepth() const;

                    /**
                     * 设置Single Query Outdegree, default 1
                     * @param _outputDepth Single Query Outdegree, default 1
                     * 
                     */
                    void SetOutputDepth(const int64_t& _outputDepth);

                    /**
                     * 判断参数 OutputDepth 是否已赋值
                     * @return OutputDepth 是否已赋值
                     * 
                     */
                    bool OutputDepthHasBeenSet() const;

                    /**
                     * 获取Additional Parameters (Pass Caller Information)
                     * @return ExtParams Additional Parameters (Pass Caller Information)
                     * 
                     */
                    std::vector<LineageParamRecord> GetExtParams() const;

                    /**
                     * 设置Additional Parameters (Pass Caller Information)
                     * @param _extParams Additional Parameters (Pass Caller Information)
                     * 
                     */
                    void SetExtParams(const std::vector<LineageParamRecord>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取Filter Temporary Tables, default true
                     * @return IgnoreTemp Filter Temporary Tables, default true
                     * 
                     */
                    bool GetIgnoreTemp() const;

                    /**
                     * 设置Filter Temporary Tables, default true
                     * @param _ignoreTemp Filter Temporary Tables, default true
                     * 
                     */
                    void SetIgnoreTemp(const bool& _ignoreTemp);

                    /**
                     * 判断参数 IgnoreTemp 是否已赋值
                     * @return IgnoreTemp 是否已赋值
                     * 
                     */
                    bool IgnoreTempHasBeenSet() const;

                    /**
                     * 获取Recursively Query Number of Secondary Nodes, default is true
                     * @return RecursiveSecond Recursively Query Number of Secondary Nodes, default is true
                     * 
                     */
                    bool GetRecursiveSecond() const;

                    /**
                     * 设置Recursively Query Number of Secondary Nodes, default is true
                     * @param _recursiveSecond Recursively Query Number of Secondary Nodes, default is true
                     * 
                     */
                    void SetRecursiveSecond(const bool& _recursiveSecond);

                    /**
                     * 判断参数 RecursiveSecond 是否已赋值
                     * @return RecursiveSecond 是否已赋值
                     * 
                     */
                    bool RecursiveSecondHasBeenSet() const;

                private:

                    /**
                     * Query Direction, INPUT, OUTPUT, BOTH enumerated values
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Table information
                     */
                    TableLineageInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Single Query Indegree, default 1
                     */
                    int64_t m_inputDepth;
                    bool m_inputDepthHasBeenSet;

                    /**
                     * Single Query Outdegree, default 1
                     */
                    int64_t m_outputDepth;
                    bool m_outputDepthHasBeenSet;

                    /**
                     * Additional Parameters (Pass Caller Information)
                     */
                    std::vector<LineageParamRecord> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * Filter Temporary Tables, default true
                     */
                    bool m_ignoreTemp;
                    bool m_ignoreTempHasBeenSet;

                    /**
                     * Recursively Query Number of Secondary Nodes, default is true
                     */
                    bool m_recursiveSecond;
                    bool m_recursiveSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFOREQUEST_H_
