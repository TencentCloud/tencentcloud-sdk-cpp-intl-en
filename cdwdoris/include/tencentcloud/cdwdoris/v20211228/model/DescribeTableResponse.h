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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Column.h>
#include <tencentcloud/cdwdoris/v20211228/model/IndexInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/Partition.h>
#include <tencentcloud/cdwdoris/v20211228/model/Distribution.h>
#include <tencentcloud/cdwdoris/v20211228/model/Property.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeTable response structure.
                */
                class DescribeTableResponse : public AbstractModel
                {
                public:
                    DescribeTableResponse();
                    ~DescribeTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeysType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeysType() const;

                    /**
                     * 判断参数 KeysType 是否已赋值
                     * @return KeysType 是否已赋值
                     * 
                     */
                    bool KeysTypeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndexInfos Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IndexInfo> GetIndexInfos() const;

                    /**
                     * 判断参数 IndexInfos 是否已赋值
                     * @return IndexInfos 是否已赋值
                     * 
                     */
                    bool IndexInfosHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partition Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Partition GetPartition() const;

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Distribution Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Distribution GetDistribution() const;

                    /**
                     * 判断参数 Distribution 是否已赋值
                     * @return Distribution 是否已赋值
                     * 
                     */
                    bool DistributionHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableComment Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Properties Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keysType;
                    bool m_keysTypeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IndexInfo> m_indexInfos;
                    bool m_indexInfosHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Partition m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Distribution m_distribution;
                    bool m_distributionHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLERESPONSE_H_
