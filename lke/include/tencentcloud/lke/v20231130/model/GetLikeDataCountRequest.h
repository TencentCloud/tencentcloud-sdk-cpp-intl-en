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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetLikeDataCount request structure.
                */
                class GetLikeDataCountRequest : public AbstractModel
                {
                public:
                    GetLikeDataCountRequest();
                    ~GetLikeDataCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date.
                     * @return StartTime Start date.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start date.
                     * @param _startTime Start date.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End date.
                     * @return EndTime End date.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End date.
                     * @param _endTime End date.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return AppBizId Application ID.
                     * 
                     */
                    std::vector<std::string> GetAppBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _appBizId Application ID.
                     * 
                     */
                    void SetAppBizId(const std::vector<std::string>& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取Message source (1. shared from user end, 2. chat api).
                     * @return Type Message source (1. shared from user end, 2. chat api).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Message source (1. shared from user end, 2. chat api).
                     * @param _type Message source (1. shared from user end, 2. chat api).
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).	
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).	
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Start date.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Application ID.
                     */
                    std::vector<std::string> m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * Message source (1. shared from user end, 2. chat api).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_
