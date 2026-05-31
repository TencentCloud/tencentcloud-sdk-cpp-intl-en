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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SparsePeriodTime.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Sparse backup policy configuration info
                */
                class SparseBackupConfigInfo : public AbstractModel
                {
                public:
                    SparseBackupConfigInfo();
                    ~SparseBackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation type: add, modify, remove</p>
                     * @return OpType <p>Operation type: add, modify, remove</p>
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置<p>Operation type: add, modify, remove</p>
                     * @param _opType <p>Operation type: add, modify, remove</p>
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取<p>Configuration ID</p>
                     * @return ConfigId <p>Configuration ID</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>Configuration ID</p>
                     * @param _configId <p>Configuration ID</p>
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Policy type: weekly/monthly/yearly</p>
                     * @return SparsePeriodConfig <p>Policy type: weekly/monthly/yearly</p>
                     * 
                     */
                    std::string GetSparsePeriodConfig() const;

                    /**
                     * 设置<p>Policy type: weekly/monthly/yearly</p>
                     * @param _sparsePeriodConfig <p>Policy type: weekly/monthly/yearly</p>
                     * 
                     */
                    void SetSparsePeriodConfig(const std::string& _sparsePeriodConfig);

                    /**
                     * 判断参数 SparsePeriodConfig 是否已赋值
                     * @return SparsePeriodConfig 是否已赋值
                     * 
                     */
                    bool SparsePeriodConfigHasBeenSet() const;

                    /**
                     * 获取<p>Cycle time configuration</p>
                     * @return SparsePeriodTime <p>Cycle time configuration</p>
                     * 
                     */
                    SparsePeriodTime GetSparsePeriodTime() const;

                    /**
                     * 设置<p>Cycle time configuration</p>
                     * @param _sparsePeriodTime <p>Cycle time configuration</p>
                     * 
                     */
                    void SetSparsePeriodTime(const SparsePeriodTime& _sparsePeriodTime);

                    /**
                     * 判断参数 SparsePeriodTime 是否已赋值
                     * @return SparsePeriodTime 是否已赋值
                     * 
                     */
                    bool SparsePeriodTimeHasBeenSet() const;

                    /**
                     * 获取<p>Retention days (7-7320 days, longest 20 years)</p>
                     * @return SparseBackupSaveDays <p>Retention days (7-7320 days, longest 20 years)</p>
                     * 
                     */
                    int64_t GetSparseBackupSaveDays() const;

                    /**
                     * 设置<p>Retention days (7-7320 days, longest 20 years)</p>
                     * @param _sparseBackupSaveDays <p>Retention days (7-7320 days, longest 20 years)</p>
                     * 
                     */
                    void SetSparseBackupSaveDays(const int64_t& _sparseBackupSaveDays);

                    /**
                     * 判断参数 SparseBackupSaveDays 是否已赋值
                     * @return SparseBackupSaveDays 是否已赋值
                     * 
                     */
                    bool SparseBackupSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Operation type: add, modify, remove</p>
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * <p>Configuration ID</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>Policy type: weekly/monthly/yearly</p>
                     */
                    std::string m_sparsePeriodConfig;
                    bool m_sparsePeriodConfigHasBeenSet;

                    /**
                     * <p>Cycle time configuration</p>
                     */
                    SparsePeriodTime m_sparsePeriodTime;
                    bool m_sparsePeriodTimeHasBeenSet;

                    /**
                     * <p>Retention days (7-7320 days, longest 20 years)</p>
                     */
                    int64_t m_sparseBackupSaveDays;
                    bool m_sparseBackupSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_
