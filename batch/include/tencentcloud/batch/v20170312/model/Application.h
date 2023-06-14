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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Docker.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Application information
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task execution command
                     * @return Command Task execution command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Task execution command
                     * @param _command Task execution command
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Delivery form of the application. Values: `PACKAGE` (package stored in a remote location), `LOCAL` (local computer).
                     * @return DeliveryForm Delivery form of the application. Values: `PACKAGE` (package stored in a remote location), `LOCAL` (local computer).
                     * 
                     */
                    std::string GetDeliveryForm() const;

                    /**
                     * 设置Delivery form of the application. Values: `PACKAGE` (package stored in a remote location), `LOCAL` (local computer).
                     * @param _deliveryForm Delivery form of the application. Values: `PACKAGE` (package stored in a remote location), `LOCAL` (local computer).
                     * 
                     */
                    void SetDeliveryForm(const std::string& _deliveryForm);

                    /**
                     * 判断参数 DeliveryForm 是否已赋值
                     * @return DeliveryForm 是否已赋值
                     * 
                     */
                    bool DeliveryFormHasBeenSet() const;

                    /**
                     * 获取Remote storage path of the application package
                     * @return PackagePath Remote storage path of the application package
                     * 
                     */
                    std::string GetPackagePath() const;

                    /**
                     * 设置Remote storage path of the application package
                     * @param _packagePath Remote storage path of the application package
                     * 
                     */
                    void SetPackagePath(const std::string& _packagePath);

                    /**
                     * 判断参数 PackagePath 是否已赋值
                     * @return PackagePath 是否已赋值
                     * 
                     */
                    bool PackagePathHasBeenSet() const;

                    /**
                     * 获取Relevant configuration of the Docker used by the application. In case that the Docker configuration is used, "LOCAL" DeliveryForm means that the application software inside the Docker image is used directly and run in Docker mode; "PACKAGE" DeliveryForm means that the remote application package is run in Docker mode after being injected into the Docker image. To avoid compatibility issues with different versions of Docker, the Docker installation package and relevant dependencies are taken care of by BatchCompute. For custom images where Docker has already been installed, uninstall Docker first and then use the Docker feature.
                     * @return Docker Relevant configuration of the Docker used by the application. In case that the Docker configuration is used, "LOCAL" DeliveryForm means that the application software inside the Docker image is used directly and run in Docker mode; "PACKAGE" DeliveryForm means that the remote application package is run in Docker mode after being injected into the Docker image. To avoid compatibility issues with different versions of Docker, the Docker installation package and relevant dependencies are taken care of by BatchCompute. For custom images where Docker has already been installed, uninstall Docker first and then use the Docker feature.
                     * 
                     */
                    Docker GetDocker() const;

                    /**
                     * 设置Relevant configuration of the Docker used by the application. In case that the Docker configuration is used, "LOCAL" DeliveryForm means that the application software inside the Docker image is used directly and run in Docker mode; "PACKAGE" DeliveryForm means that the remote application package is run in Docker mode after being injected into the Docker image. To avoid compatibility issues with different versions of Docker, the Docker installation package and relevant dependencies are taken care of by BatchCompute. For custom images where Docker has already been installed, uninstall Docker first and then use the Docker feature.
                     * @param _docker Relevant configuration of the Docker used by the application. In case that the Docker configuration is used, "LOCAL" DeliveryForm means that the application software inside the Docker image is used directly and run in Docker mode; "PACKAGE" DeliveryForm means that the remote application package is run in Docker mode after being injected into the Docker image. To avoid compatibility issues with different versions of Docker, the Docker installation package and relevant dependencies are taken care of by BatchCompute. For custom images where Docker has already been installed, uninstall Docker first and then use the Docker feature.
                     * 
                     */
                    void SetDocker(const Docker& _docker);

                    /**
                     * 判断参数 Docker 是否已赋值
                     * @return Docker 是否已赋值
                     * 
                     */
                    bool DockerHasBeenSet() const;

                private:

                    /**
                     * Task execution command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Delivery form of the application. Values: `PACKAGE` (package stored in a remote location), `LOCAL` (local computer).
                     */
                    std::string m_deliveryForm;
                    bool m_deliveryFormHasBeenSet;

                    /**
                     * Remote storage path of the application package
                     */
                    std::string m_packagePath;
                    bool m_packagePathHasBeenSet;

                    /**
                     * Relevant configuration of the Docker used by the application. In case that the Docker configuration is used, "LOCAL" DeliveryForm means that the application software inside the Docker image is used directly and run in Docker mode; "PACKAGE" DeliveryForm means that the remote application package is run in Docker mode after being injected into the Docker image. To avoid compatibility issues with different versions of Docker, the Docker installation package and relevant dependencies are taken care of by BatchCompute. For custom images where Docker has already been installed, uninstall Docker first and then use the Docker feature.
                     */
                    Docker m_docker;
                    bool m_dockerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_
