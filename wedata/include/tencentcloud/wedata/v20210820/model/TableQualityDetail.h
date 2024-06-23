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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Table Quality Details
                */
                class TableQualityDetail : public AbstractModel
                {
                public:
                    TableQualityDetail();
                    ~TableQualityDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUserId Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetOwnerUserId() const;

                    /**
                     * 设置Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUserId Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerUserId(const int64_t& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取Table Owner Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerUserName Table Owner Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置Table Owner Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerUserName Table Owner Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取Database Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseScore Database Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetDatabaseScore() const;

                    /**
                     * 设置Database Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseScore Database Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseScore(const double& _databaseScore);

                    /**
                     * 判断参数 DatabaseScore 是否已赋值
                     * @return DatabaseScore 是否已赋值
                     * 
                     */
                    bool DatabaseScoreHasBeenSet() const;

                    /**
                     * 获取Table Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableScore Table Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetTableScore() const;

                    /**
                     * 设置Table Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableScore Table Score
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableScore(const double& _tableScore);

                    /**
                     * 判断参数 TableScore 是否已赋值
                     * @return TableScore 是否已赋值
                     * 
                     */
                    bool TableScoreHasBeenSet() const;

                    /**
                     * 获取Table Month-over-Month Growth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastPeriodRatio Table Month-over-Month Growth
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLastPeriodRatio() const;

                    /**
                     * 设置Table Month-over-Month Growth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastPeriodRatio Table Month-over-Month Growth
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastPeriodRatio(const double& _lastPeriodRatio);

                    /**
                     * 判断参数 LastPeriodRatio 是否已赋值
                     * @return LastPeriodRatio 是否已赋值
                     * 
                     */
                    bool LastPeriodRatioHasBeenSet() const;

                    /**
                     * 获取0 or not returned or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DsEnvType 0 or not returned or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置0 or not returned or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dsEnvType 0 or not returned or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                private:

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table Owner ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * Table Owner Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * Database Score
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_databaseScore;
                    bool m_databaseScoreHasBeenSet;

                    /**
                     * Table Score
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_tableScore;
                    bool m_tableScoreHasBeenSet;

                    /**
                     * Table Month-over-Month Growth
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_lastPeriodRatio;
                    bool m_lastPeriodRatioHasBeenSet;

                    /**
                     * 0 or not returned or null: Undefined, 1: Production, 2: Development
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_
