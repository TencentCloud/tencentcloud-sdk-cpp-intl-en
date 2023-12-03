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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Configurations of sending slow and error logs of a CDB instance to CLS.
                */
                class LogToCLSConfig : public AbstractModel
                {
                public:
                    LogToCLSConfig();
                    ~LogToCLSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enabling status of the feature.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return Status Enabling status of the feature.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Enabling status of the feature.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _status Enabling status of the feature.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CLS log set ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return LogSetId CLS log set ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置CLS log set ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _logSetId CLS log set ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return LogTopicId Log topic ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _logTopicId Log topic ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * Enabling status of the feature.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLS log set ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_LOGTOCLSCONFIG_H_
