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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TCBEnvironment.h>
#include <tencentcloud/ssl/v20191205/model/TCBAccessService.h>
#include <tencentcloud/ssl/v20191205/model/TCBHostService.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of TCB instances by environment - data structure of an async task for querying associated cloud resources
                */
                class TCBEnvironments : public AbstractModel
                {
                public:
                    TCBEnvironments();
                    ~TCBEnvironments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The TCB environment.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Environment The TCB environment.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TCBEnvironment GetEnvironment() const;

                    /**
                     * 设置The TCB environment.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _environment The TCB environment.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironment(const TCBEnvironment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取The access service.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessService The access service.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TCBAccessService GetAccessService() const;

                    /**
                     * 设置The access service.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessService The access service.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessService(const TCBAccessService& _accessService);

                    /**
                     * 判断参数 AccessService 是否已赋值
                     * @return AccessService 是否已赋值
                     * 
                     */
                    bool AccessServiceHasBeenSet() const;

                    /**
                     * 获取Whether static hosting is used.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostService Whether static hosting is used.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TCBHostService GetHostService() const;

                    /**
                     * 设置Whether static hosting is used.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostService Whether static hosting is used.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostService(const TCBHostService& _hostService);

                    /**
                     * 判断参数 HostService 是否已赋值
                     * @return HostService 是否已赋值
                     * 
                     */
                    bool HostServiceHasBeenSet() const;

                private:

                    /**
                     * The TCB environment.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TCBEnvironment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * The access service.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TCBAccessService m_accessService;
                    bool m_accessServiceHasBeenSet;

                    /**
                     * Whether static hosting is used.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TCBHostService m_hostService;
                    bool m_hostServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENTS_H_
