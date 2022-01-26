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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetRequestStatus request structure.
                */
                class GetRequestStatusRequest : public AbstractModel
                {
                public:
                    GetRequestStatusRequest();
                    ~GetRequestStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param FunctionName Function name
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取ID of the request to be queried
                     * @return FunctionRequestId ID of the request to be queried
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置ID of the request to be queried
                     * @param FunctionRequestId ID of the request to be queried
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param Namespace Function namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Start time of the query, for example `2017-05-16 20:00:00`. If it’s left empty, it defaults to the current time minus 24 hours.
                     * @return StartTime Start time of the query, for example `2017-05-16 20:00:00`. If it’s left empty, it defaults to the current time minus 24 hours.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query, for example `2017-05-16 20:00:00`. If it’s left empty, it defaults to the current time minus 24 hours.
                     * @param StartTime Start time of the query, for example `2017-05-16 20:00:00`. If it’s left empty, it defaults to the current time minus 24 hours.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query, for example `2017-05-16 20:59:59`. If it’s left empty, it defaults to the current time. Note that the EndTime should be later than the StartTime
                     * @return EndTime End time of the query, for example `2017-05-16 20:59:59`. If it’s left empty, it defaults to the current time. Note that the EndTime should be later than the StartTime
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query, for example `2017-05-16 20:59:59`. If it’s left empty, it defaults to the current time. Note that the EndTime should be later than the StartTime
                     * @param EndTime End time of the query, for example `2017-05-16 20:59:59`. If it’s left empty, it defaults to the current time. Note that the EndTime should be later than the StartTime
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * ID of the request to be queried
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Start time of the query, for example `2017-05-16 20:00:00`. If it’s left empty, it defaults to the current time minus 24 hours.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query, for example `2017-05-16 20:59:59`. If it’s left empty, it defaults to the current time. Note that the EndTime should be later than the StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_
