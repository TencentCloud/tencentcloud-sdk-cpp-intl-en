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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAsyncContextTask request structure.
                */
                class CreateAsyncContextTaskRequest : public AbstractModel
                {
                public:
                    CreateAsyncContextTaskRequest();
                    ~CreateAsyncContextTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log time in milliseconds
                     * @return Time Log time in milliseconds
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Log time in milliseconds
                     * @param Time Log time in milliseconds
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Log package number
                     * @return PkgId Log package number
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package number
                     * @param PkgId Log package number
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Log number in log package
                     * @return PkgLogId Log number in log package
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置Log number in log package
                     * @param PkgLogId Log number in log package
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Offline search task ID
                     * @return AsyncSearchTaskId Offline search task ID
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置Offline search task ID
                     * @param AsyncSearchTaskId Offline search task ID
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log time in milliseconds
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Log package number
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log number in log package
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Offline search task ID
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCCONTEXTTASKREQUEST_H_
