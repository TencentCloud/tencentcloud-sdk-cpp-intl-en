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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcTableInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcFiledInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcPartitionInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcPartitionExtra.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Data Lake Computing Service (Data Lake Compute, DLC) import configuration info
                */
                class DlcInfo : public AbstractModel
                {
                public:
                    DlcInfo();
                    ~DlcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dlc table information
                     * @return TableInfo dlc table information
                     * 
                     */
                    DlcTableInfo GetTableInfo() const;

                    /**
                     * 设置dlc table information
                     * @param _tableInfo dlc table information
                     * 
                     */
                    void SetTableInfo(const DlcTableInfo& _tableInfo);

                    /**
                     * 判断参数 TableInfo 是否已赋值
                     * @return TableInfo 是否已赋值
                     * 
                     */
                    bool TableInfoHasBeenSet() const;

                    /**
                     * 获取dlc data field information
                     * @return FieldInfos dlc data field information
                     * 
                     */
                    std::vector<DlcFiledInfo> GetFieldInfos() const;

                    /**
                     * 设置dlc data field information
                     * @param _fieldInfos dlc data field information
                     * 
                     */
                    void SetFieldInfos(const std::vector<DlcFiledInfo>& _fieldInfos);

                    /**
                     * 判断参数 FieldInfos 是否已赋值
                     * @return FieldInfos 是否已赋值
                     * 
                     */
                    bool FieldInfosHasBeenSet() const;

                    /**
                     * 获取dlc partition information
                     * @return PartitionInfos dlc partition information
                     * 
                     */
                    std::vector<DlcPartitionInfo> GetPartitionInfos() const;

                    /**
                     * 设置dlc partition information
                     * @param _partitionInfos dlc partition information
                     * 
                     */
                    void SetPartitionInfos(const std::vector<DlcPartitionInfo>& _partitionInfos);

                    /**
                     * 判断参数 PartitionInfos 是否已赋值
                     * @return PartitionInfos 是否已赋值
                     * 
                     */
                    bool PartitionInfosHasBeenSet() const;

                    /**
                     * 获取dlc partition additional information
                     * @return PartitionExtra dlc partition additional information
                     * 
                     */
                    DlcPartitionExtra GetPartitionExtra() const;

                    /**
                     * 设置dlc partition additional information
                     * @param _partitionExtra dlc partition additional information
                     * 
                     */
                    void SetPartitionExtra(const DlcPartitionExtra& _partitionExtra);

                    /**
                     * 判断参数 PartitionExtra 是否已赋值
                     * @return PartitionExtra 是否已赋值
                     * 
                     */
                    bool PartitionExtraHasBeenSet() const;

                private:

                    /**
                     * dlc table information
                     */
                    DlcTableInfo m_tableInfo;
                    bool m_tableInfoHasBeenSet;

                    /**
                     * dlc data field information
                     */
                    std::vector<DlcFiledInfo> m_fieldInfos;
                    bool m_fieldInfosHasBeenSet;

                    /**
                     * dlc partition information
                     */
                    std::vector<DlcPartitionInfo> m_partitionInfos;
                    bool m_partitionInfosHasBeenSet;

                    /**
                     * dlc partition additional information
                     */
                    DlcPartitionExtra m_partitionExtra;
                    bool m_partitionExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_
