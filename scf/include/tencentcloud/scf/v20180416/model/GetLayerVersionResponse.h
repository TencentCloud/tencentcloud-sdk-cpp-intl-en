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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_

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
                * GetLayerVersion response structure.
                */
                class GetLayerVersionResponse : public AbstractModel
                {
                public:
                    GetLayerVersionResponse();
                    ~GetLayerVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Compatible runtimes
                     * @return CompatibleRuntimes Compatible runtimes
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取SHA256 encoding of file on layer version
                     * @return CodeSha256 SHA256 encoding of file on layer version
                     */
                    std::string GetCodeSha256() const;

                    /**
                     * 判断参数 CodeSha256 是否已赋值
                     * @return CodeSha256 是否已赋值
                     */
                    bool CodeSha256HasBeenSet() const;

                    /**
                     * 获取Download address of file on layer version
                     * @return Location Download address of file on layer version
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Version creation time
                     * @return AddTime Version creation time
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Version description
                     * @return Description Version description
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取License information
                     * @return LicenseInfo License information
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     */
                    bool LicenseInfoHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return LayerVersion Version number
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     */
                    bool LayerVersionHasBeenSet() const;

                    /**
                     * 获取Layer name
                     * @return LayerName Layer name
                     */
                    std::string GetLayerName() const;

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取Current status of specific layer version. Valid values:
Active: normal
Publishing: publishing
PublishFailed: publishing failed
Deleted: deleted
                     * @return Status Current status of specific layer version. Valid values:
Active: normal
Publishing: publishing
PublishFailed: publishing failed
Deleted: deleted
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Compatible runtimes
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * SHA256 encoding of file on layer version
                     */
                    std::string m_codeSha256;
                    bool m_codeSha256HasBeenSet;

                    /**
                     * Download address of file on layer version
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Version creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Version description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * License information
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                    /**
                     * Version number
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                    /**
                     * Layer name
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * Current status of specific layer version. Valid values:
Active: normal
Publishing: publishing
PublishFailed: publishing failed
Deleted: deleted
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETLAYERVERSIONRESPONSE_H_
