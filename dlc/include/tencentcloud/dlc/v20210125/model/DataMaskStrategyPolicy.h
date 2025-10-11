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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Masking policy permission object.
                */
                class DataMaskStrategyPolicy : public AbstractModel
                {
                public:
                    DataMaskStrategyPolicy();
                    ~DataMaskStrategyPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Masking permission object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyInfo Masking permission object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policy GetPolicyInfo() const;

                    /**
                     * 设置Masking permission object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyInfo Masking permission object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyInfo(const Policy& _policyInfo);

                    /**
                     * 判断参数 PolicyInfo 是否已赋值
                     * @return PolicyInfo 是否已赋值
                     * 
                     */
                    bool PolicyInfoHasBeenSet() const;

                    /**
                     * 获取Masking policy ID. specifies the ID of the data masking policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataMaskStrategyId Masking policy ID. specifies the ID of the data masking policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataMaskStrategyId() const;

                    /**
                     * 设置Masking policy ID. specifies the ID of the data masking policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataMaskStrategyId Masking policy ID. specifies the ID of the data masking policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataMaskStrategyId(const std::string& _dataMaskStrategyId);

                    /**
                     * 判断参数 DataMaskStrategyId 是否已赋值
                     * @return DataMaskStrategyId 是否已赋值
                     * 
                     */
                    bool DataMaskStrategyIdHasBeenSet() const;

                    /**
                     * 获取Bound field type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColumnType Bound field type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置Bound field type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columnType Bound field type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                private:

                    /**
                     * Masking permission object.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policy m_policyInfo;
                    bool m_policyInfoHasBeenSet;

                    /**
                     * Masking policy ID. specifies the ID of the data masking policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataMaskStrategyId;
                    bool m_dataMaskStrategyIdHasBeenSet;

                    /**
                     * Bound field type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_
