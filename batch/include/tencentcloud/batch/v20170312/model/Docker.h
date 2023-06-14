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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Docker container information
                */
                class Docker : public AbstractModel
                {
                public:
                    Docker();
                    ~Docker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Docker Hub username or Tencent Registry username
                     * @return User Docker Hub username or Tencent Registry username
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Docker Hub username or Tencent Registry username
                     * @param _user Docker Hub username or Tencent Registry username
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Docker Hub password or Tencent Registry password
                     * @return Password Docker Hub password or Tencent Registry password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Docker Hub password or Tencent Registry password
                     * @param _password Docker Hub password or Tencent Registry password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取For Docker Hub, enter "[user/repo]:[tag]"; for Tencent Registry, enter "ccr.ccs.tencentyun.com/[namespace/repo]:[tag]"
                     * @return Image For Docker Hub, enter "[user/repo]:[tag]"; for Tencent Registry, enter "ccr.ccs.tencentyun.com/[namespace/repo]:[tag]"
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置For Docker Hub, enter "[user/repo]:[tag]"; for Tencent Registry, enter "ccr.ccs.tencentyun.com/[namespace/repo]:[tag]"
                     * @param _image For Docker Hub, enter "[user/repo]:[tag]"; for Tencent Registry, enter "ccr.ccs.tencentyun.com/[namespace/repo]:[tag]"
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取For Docker Hub, this can be left blank, but please ensure public network access is present. For Tencent Registry, the server address is "ccr.ccs.tencentyun.com"
                     * @return Server For Docker Hub, this can be left blank, but please ensure public network access is present. For Tencent Registry, the server address is "ccr.ccs.tencentyun.com"
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置For Docker Hub, this can be left blank, but please ensure public network access is present. For Tencent Registry, the server address is "ccr.ccs.tencentyun.com"
                     * @param _server For Docker Hub, this can be left blank, but please ensure public network access is present. For Tencent Registry, the server address is "ccr.ccs.tencentyun.com"
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取Maximum retry attempts to load docket images. Range: 0 - 10. Default: `0`
                     * @return MaxRetryCount Maximum retry attempts to load docket images. Range: 0 - 10. Default: `0`
                     * 
                     */
                    uint64_t GetMaxRetryCount() const;

                    /**
                     * 设置Maximum retry attempts to load docket images. Range: 0 - 10. Default: `0`
                     * @param _maxRetryCount Maximum retry attempts to load docket images. Range: 0 - 10. Default: `0`
                     * 
                     */
                    void SetMaxRetryCount(const uint64_t& _maxRetryCount);

                    /**
                     * 判断参数 MaxRetryCount 是否已赋值
                     * @return MaxRetryCount 是否已赋值
                     * 
                     */
                    bool MaxRetryCountHasBeenSet() const;

                    /**
                     * 获取Docker image loading timeout period (in seconds). Range: 1 - 360
                     * @return DelayOnRetry Docker image loading timeout period (in seconds). Range: 1 - 360
                     * 
                     */
                    uint64_t GetDelayOnRetry() const;

                    /**
                     * 设置Docker image loading timeout period (in seconds). Range: 1 - 360
                     * @param _delayOnRetry Docker image loading timeout period (in seconds). Range: 1 - 360
                     * 
                     */
                    void SetDelayOnRetry(const uint64_t& _delayOnRetry);

                    /**
                     * 判断参数 DelayOnRetry 是否已赋值
                     * @return DelayOnRetry 是否已赋值
                     * 
                     */
                    bool DelayOnRetryHasBeenSet() const;

                    /**
                     * 获取Docker command execution parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DockerRunOption Docker command execution parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDockerRunOption() const;

                    /**
                     * 设置Docker command execution parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _dockerRunOption Docker command execution parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetDockerRunOption(const std::string& _dockerRunOption);

                    /**
                     * 判断参数 DockerRunOption 是否已赋值
                     * @return DockerRunOption 是否已赋值
                     * 
                     */
                    bool DockerRunOptionHasBeenSet() const;

                private:

                    /**
                     * Docker Hub username or Tencent Registry username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Docker Hub password or Tencent Registry password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * For Docker Hub, enter "[user/repo]:[tag]"; for Tencent Registry, enter "ccr.ccs.tencentyun.com/[namespace/repo]:[tag]"
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * For Docker Hub, this can be left blank, but please ensure public network access is present. For Tencent Registry, the server address is "ccr.ccs.tencentyun.com"
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * Maximum retry attempts to load docket images. Range: 0 - 10. Default: `0`
                     */
                    uint64_t m_maxRetryCount;
                    bool m_maxRetryCountHasBeenSet;

                    /**
                     * Docker image loading timeout period (in seconds). Range: 1 - 360
                     */
                    uint64_t m_delayOnRetry;
                    bool m_delayOnRetryHasBeenSet;

                    /**
                     * Docker command execution parameter
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_dockerRunOption;
                    bool m_dockerRunOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_
