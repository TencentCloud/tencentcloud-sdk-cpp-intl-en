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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/BindResourceResult.h>
#include <tencentcloud/ssl/v20191205/model/Error.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Result of an async task for querying associated cloud resources
                */
                class SyncTaskBindResourceResult : public AbstractModel
                {
                public:
                    SyncTaskBindResourceResult();
                    ~SyncTaskBindResourceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param _taskId The task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindResourceResult The associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BindResourceResult> GetBindResourceResult() const;

                    /**
                     * 设置The associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindResourceResult The associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindResourceResult(const std::vector<BindResourceResult>& _bindResourceResult);

                    /**
                     * 判断参数 BindResourceResult 是否已赋值
                     * @return BindResourceResult 是否已赋值
                     * 
                     */
                    bool BindResourceResultHasBeenSet() const;

                    /**
                     * 获取The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, the result of `BindResourceResult` will be displayed; if the status is `2`, the error causes will be displayed.
                     * @return Status The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, the result of `BindResourceResult` will be displayed; if the status is `2`, the error causes will be displayed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, the result of `BindResourceResult` will be displayed; if the status is `2`, the error causes will be displayed.
                     * @param _status The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, the result of `BindResourceResult` will be displayed; if the status is `2`, the error causes will be displayed.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The error occurred when querying the associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Error The error occurred when querying the associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Error GetError() const;

                    /**
                     * 设置The error occurred when querying the associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _error The error occurred when querying the associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const Error& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取The cache time of the current result.
                     * @return CacheTime The cache time of the current result.
                     * 
                     */
                    std::string GetCacheTime() const;

                    /**
                     * 设置The cache time of the current result.
                     * @param _cacheTime The cache time of the current result.
                     * 
                     */
                    void SetCacheTime(const std::string& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BindResourceResult> m_bindResourceResult;
                    bool m_bindResourceResultHasBeenSet;

                    /**
                     * The status of the async task. Valid values: `0` for querying, `1` for successful, and `2` for abnormal. If the status is `1`, the result of `BindResourceResult` will be displayed; if the status is `2`, the error causes will be displayed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error occurred when querying the associated cloud resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Error m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * The cache time of the current result.
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_
