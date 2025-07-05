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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Experiment report status information
                */
                class TaskReportInfo : public AbstractModel
                {
                public:
                    TaskReportInfo();
                    ~TaskReportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: not started; 1: exporting; 2: export successful; 3: export failed.
                     * @return Stage 0: not started; 1: exporting; 2: export successful; 3: export failed.
                     * 
                     */
                    int64_t GetStage() const;

                    /**
                     * 设置0: not started; 1: exporting; 2: export successful; 3: export failed.
                     * @param _stage 0: not started; 1: exporting; 2: export successful; 3: export failed.
                     * 
                     */
                    void SetStage(const int64_t& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取End time of the validity period
                     * @return ExpirationTime End time of the validity period
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 设置End time of the validity period
                     * @param _expirationTime End time of the validity period
                     * 
                     */
                    void SetExpirationTime(const std::string& _expirationTime);

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is effective
                     * @return Expired Whether it is effective
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置Whether it is effective
                     * @param _expired Whether it is effective
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取Address of the COS experiment report file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosUrl Address of the COS experiment report file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置Address of the COS experiment report file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosUrl Address of the COS experiment report file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取Experiment report export log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Log Experiment report export log
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Experiment report export log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _log Experiment report export log
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                private:

                    /**
                     * 0: not started; 1: exporting; 2: export successful; 3: export failed.
                     */
                    int64_t m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * End time of the validity period
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * Whether it is effective
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * Address of the COS experiment report file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * Experiment report export log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_
