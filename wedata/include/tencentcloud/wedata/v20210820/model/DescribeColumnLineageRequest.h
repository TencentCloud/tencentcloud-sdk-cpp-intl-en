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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ColumnLineageInfo.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeColumnLineage request structure.
                */
                class DescribeColumnLineageRequest : public AbstractModel
                {
                public:
                    DescribeColumnLineageRequest();
                    ~DescribeColumnLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumeration value of query direction.

- INPUT
- OUTPUT
- BOTH
                     * @return Direction Enumeration value of query direction.

- INPUT
- OUTPUT
- BOTH
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Enumeration value of query direction.

- INPUT
- OUTPUT
- BOTH
                     * @param _direction Enumeration value of query direction.

- INPUT
- OUTPUT
- BOTH
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
                     * 获取Field Information
                     * @return Data Field Information
                     * 
                     */
                    ColumnLineageInfo GetData() const;

                    /**
                     * 设置Field Information
                     * @param _data Field Information
                     * 
                     */
                    void SetData(const ColumnLineageInfo& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Single Query Indegree
                     * @return InputDepth Single Query Indegree
                     * 
                     */
                    int64_t GetInputDepth() const;

                    /**
                     * 设置Single Query Indegree
                     * @param _inputDepth Single Query Indegree
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
                     * 获取Single Query Outdegree
                     * @return OutputDepth Single Query Outdegree
                     * 
                     */
                    int64_t GetOutputDepth() const;

                    /**
                     * 设置Single Query Outdegree
                     * @param _outputDepth Single Query Outdegree
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
                    std::vector<RecordField> GetExtParams() const;

                    /**
                     * 设置Additional Parameters (Pass Caller Information)
                     * @param _extParams Additional Parameters (Pass Caller Information)
                     * 
                     */
                    void SetExtParams(const std::vector<RecordField>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取Filter Temporary Tables with the default value true
                     * @return IgnoreTemp Filter Temporary Tables with the default value true
                     * 
                     */
                    bool GetIgnoreTemp() const;

                    /**
                     * 设置Filter Temporary Tables with the default value true
                     * @param _ignoreTemp Filter Temporary Tables with the default value true
                     * 
                     */
                    void SetIgnoreTemp(const bool& _ignoreTemp);

                    /**
                     * 判断参数 IgnoreTemp 是否已赋值
                     * @return IgnoreTemp 是否已赋值
                     * 
                     */
                    bool IgnoreTempHasBeenSet() const;

                private:

                    /**
                     * Enumeration value of query direction.

- INPUT
- OUTPUT
- BOTH
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Field Information
                     */
                    ColumnLineageInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Single Query Indegree
                     */
                    int64_t m_inputDepth;
                    bool m_inputDepthHasBeenSet;

                    /**
                     * Single Query Outdegree
                     */
                    int64_t m_outputDepth;
                    bool m_outputDepthHasBeenSet;

                    /**
                     * Additional Parameters (Pass Caller Information)
                     */
                    std::vector<RecordField> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * Filter Temporary Tables with the default value true
                     */
                    bool m_ignoreTemp;
                    bool m_ignoreTempHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_
