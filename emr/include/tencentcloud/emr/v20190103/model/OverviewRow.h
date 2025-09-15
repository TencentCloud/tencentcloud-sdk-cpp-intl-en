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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Return of HBase TableMetric overview
                */
                class OverviewRow : public AbstractModel
                {
                public:
                    OverviewRow();
                    ~OverviewRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name
                     * @return Table Table name
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
                     * @param _table Table name
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Number of read requests
                     * @return ReadRequestCount Number of read requests
                     * 
                     */
                    double GetReadRequestCount() const;

                    /**
                     * 设置Number of read requests
                     * @param _readRequestCount Number of read requests
                     * 
                     */
                    void SetReadRequestCount(const double& _readRequestCount);

                    /**
                     * 判断参数 ReadRequestCount 是否已赋值
                     * @return ReadRequestCount 是否已赋值
                     * 
                     */
                    bool ReadRequestCountHasBeenSet() const;

                    /**
                     * 获取Number of write requests
                     * @return WriteRequestCount Number of write requests
                     * 
                     */
                    double GetWriteRequestCount() const;

                    /**
                     * 设置Number of write requests
                     * @param _writeRequestCount Number of write requests
                     * 
                     */
                    void SetWriteRequestCount(const double& _writeRequestCount);

                    /**
                     * 判断参数 WriteRequestCount 是否已赋值
                     * @return WriteRequestCount 是否已赋值
                     * 
                     */
                    bool WriteRequestCountHasBeenSet() const;

                    /**
                     * 获取Current memstore size
                     * @return MemstoreSize Current memstore size
                     * 
                     */
                    double GetMemstoreSize() const;

                    /**
                     * 设置Current memstore size
                     * @param _memstoreSize Current memstore size
                     * 
                     */
                    void SetMemstoreSize(const double& _memstoreSize);

                    /**
                     * 判断参数 MemstoreSize 是否已赋值
                     * @return MemstoreSize 是否已赋值
                     * 
                     */
                    bool MemstoreSizeHasBeenSet() const;

                    /**
                     * 获取Size of StoreFile in the current region
                     * @return StoreFileSize Size of StoreFile in the current region
                     * 
                     */
                    double GetStoreFileSize() const;

                    /**
                     * 设置Size of StoreFile in the current region
                     * @param _storeFileSize Size of StoreFile in the current region
                     * 
                     */
                    void SetStoreFileSize(const double& _storeFileSize);

                    /**
                     * 判断参数 StoreFileSize 是否已赋值
                     * @return StoreFileSize 是否已赋值
                     * 
                     */
                    bool StoreFileSizeHasBeenSet() const;

                    /**
                     * 获取Regions. Click to jump.
                     * @return Operation Regions. Click to jump.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Regions. Click to jump.
                     * @param _operation Regions. Click to jump.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取StoreFile quantity. 
                     * @return StoreFileNum StoreFile quantity. 
                     * 
                     */
                    double GetStoreFileNum() const;

                    /**
                     * 设置StoreFile quantity. 
                     * @param _storeFileNum StoreFile quantity. 
                     * 
                     */
                    void SetStoreFileNum(const double& _storeFileNum);

                    /**
                     * 判断参数 StoreFileNum 是否已赋值
                     * @return StoreFileNum 是否已赋值
                     * 
                     */
                    bool StoreFileNumHasBeenSet() const;

                private:

                    /**
                     * Table name
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Number of read requests
                     */
                    double m_readRequestCount;
                    bool m_readRequestCountHasBeenSet;

                    /**
                     * Number of write requests
                     */
                    double m_writeRequestCount;
                    bool m_writeRequestCountHasBeenSet;

                    /**
                     * Current memstore size
                     */
                    double m_memstoreSize;
                    bool m_memstoreSizeHasBeenSet;

                    /**
                     * Size of StoreFile in the current region
                     */
                    double m_storeFileSize;
                    bool m_storeFileSizeHasBeenSet;

                    /**
                     * Regions. Click to jump.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * StoreFile quantity. 
                     */
                    double m_storeFileNum;
                    bool m_storeFileNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_
