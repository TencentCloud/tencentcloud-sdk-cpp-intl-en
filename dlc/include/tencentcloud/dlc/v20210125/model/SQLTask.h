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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SQLTASK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SQLTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                *  SQL query task
                */
                class SQLTask : public AbstractModel
                {
                public:
                    SQLTask();
                    ~SQLTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encrypted SQL statement
                     * @return SQL Base64-encrypted SQL statement
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置Base64-encrypted SQL statement
                     * @param _sQL Base64-encrypted SQL statement
                     * 
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取Task configuration information
                     * @return Config Task configuration information
                     * 
                     */
                    std::vector<KVPair> GetConfig() const;

                    /**
                     * 设置Task configuration information
                     * @param _config Task configuration information
                     * 
                     */
                    void SetConfig(const std::vector<KVPair>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Base64-encrypted SQL statement
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * Task configuration information
                     */
                    std::vector<KVPair> m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SQLTASK_H_
