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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATETABLEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Column.h>
#include <tencentcloud/cdwdoris/v20211228/model/Distribution.h>
#include <tencentcloud/cdwdoris/v20211228/model/IndexInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/Partition.h>
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
                * CreateTable request structure.
                */
                class CreateTableRequest : public AbstractModel
                {
                public:
                    CreateTableRequest();
                    ~CreateTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * @return InstanceId Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * @param _instanceId Resource ID, which is the TCHouse-D resource ID used for table creation.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The database where the table is located; if it does not exist, create one.
                     * @return DbName The database where the table is located; if it does not exist, create one.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置The database where the table is located; if it does not exist, create one.
                     * @param _dbName The database where the table is located; if it does not exist, create one.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Name of the table to be created
                     * @return TableName Name of the table to be created
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Name of the table to be created
                     * @param _tableName Name of the table to be created
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Table data model: 
AGG_KEY: aggregation model; 
UNI_KEY: primary key model; 
DUP_KEY: detail model
                     * @return KeysType Table data model: 
AGG_KEY: aggregation model; 
UNI_KEY: primary key model; 
DUP_KEY: detail model
                     * 
                     */
                    std::string GetKeysType() const;

                    /**
                     * 设置Table data model: 
AGG_KEY: aggregation model; 
UNI_KEY: primary key model; 
DUP_KEY: detail model
                     * @param _keysType Table data model: 
AGG_KEY: aggregation model; 
UNI_KEY: primary key model; 
DUP_KEY: detail model
                     * 
                     */
                    void SetKeysType(const std::string& _keysType);

                    /**
                     * 判断参数 KeysType 是否已赋值
                     * @return KeysType 是否已赋值
                     * 
                     */
                    bool KeysTypeHasBeenSet() const;

                    /**
                     * 获取Column information of the table
                     * @return Columns Column information of the table
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 设置Column information of the table
                     * @param _columns Column information of the table
                     * 
                     */
                    void SetColumns(const std::vector<Column>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Bucket information
                     * @return Distribution Bucket information
                     * 
                     */
                    Distribution GetDistribution() const;

                    /**
                     * 设置Bucket information
                     * @param _distribution Bucket information
                     * 
                     */
                    void SetDistribution(const Distribution& _distribution);

                    /**
                     * 判断参数 Distribution 是否已赋值
                     * @return Distribution 是否已赋值
                     * 
                     */
                    bool DistributionHasBeenSet() const;

                    /**
                     * 获取Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return UserName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _userName Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @return PassWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * @param _passWord Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取Index information. The inverted index and N-Gram index can be configured through this parameter. The Prefix index is related to the sort key and key column, and do not require additional configuration. Configure bloom_filter_columns in the table attribute when BloomFilter index is required.
                     * @return IndexInfos Index information. The inverted index and N-Gram index can be configured through this parameter. The Prefix index is related to the sort key and key column, and do not require additional configuration. Configure bloom_filter_columns in the table attribute when BloomFilter index is required.
                     * 
                     */
                    std::vector<IndexInfo> GetIndexInfos() const;

                    /**
                     * 设置Index information. The inverted index and N-Gram index can be configured through this parameter. The Prefix index is related to the sort key and key column, and do not require additional configuration. Configure bloom_filter_columns in the table attribute when BloomFilter index is required.
                     * @param _indexInfos Index information. The inverted index and N-Gram index can be configured through this parameter. The Prefix index is related to the sort key and key column, and do not require additional configuration. Configure bloom_filter_columns in the table attribute when BloomFilter index is required.
                     * 
                     */
                    void SetIndexInfos(const std::vector<IndexInfo>& _indexInfos);

                    /**
                     * 判断参数 IndexInfos 是否已赋值
                     * @return IndexInfos 是否已赋值
                     * 
                     */
                    bool IndexInfosHasBeenSet() const;

                    /**
                     * 获取Partition information
                     * @return Partition Partition information
                     * 
                     */
                    Partition GetPartition() const;

                    /**
                     * 设置Partition information
                     * @param _partition Partition information
                     * 
                     */
                    void SetPartition(const Partition& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Table description
                     * @return TableComment Table description
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置Table description
                     * @param _tableComment Table description
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取Table attribute
                     * @return Properties Table attribute
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置Table attribute
                     * @param _properties Table attribute
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * Resource ID, which is the TCHouse-D resource ID used for table creation.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The database where the table is located; if it does not exist, create one.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Name of the table to be created
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table data model: 
AGG_KEY: aggregation model; 
UNI_KEY: primary key model; 
DUP_KEY: detail model
                     */
                    std::string m_keysType;
                    bool m_keysTypeHasBeenSet;

                    /**
                     * Column information of the table
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Bucket information
                     */
                    Distribution m_distribution;
                    bool m_distributionHasBeenSet;

                    /**
                     * Use the user who has corresponding permissions for operations. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password corresponding to the user. If the TCHouse-D cluster uses a kernel account registered by a CAM user, you do not need to fill it in.
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * Index information. The inverted index and N-Gram index can be configured through this parameter. The Prefix index is related to the sort key and key column, and do not require additional configuration. Configure bloom_filter_columns in the table attribute when BloomFilter index is required.
                     */
                    std::vector<IndexInfo> m_indexInfos;
                    bool m_indexInfosHasBeenSet;

                    /**
                     * Partition information
                     */
                    Partition m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Table description
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * Table attribute
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATETABLEREQUEST_H_
