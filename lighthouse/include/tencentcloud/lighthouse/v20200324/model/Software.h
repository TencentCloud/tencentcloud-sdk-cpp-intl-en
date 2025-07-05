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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/SoftwareDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Image software information.
                */
                class Software : public AbstractModel
                {
                public:
                    Software();
                    ~Software() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Software name.
                     * @return Name Software name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Software name.
                     * @param _name Software name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Software version.
                     * @return Version Software version.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Software version.
                     * @param _version Software version.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Software picture URL.
                     * @return ImageUrl Software picture URL.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Software picture URL.
                     * @param _imageUrl Software picture URL.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Software installation directory.
                     * @return InstallDir Software installation directory.
                     * 
                     */
                    std::string GetInstallDir() const;

                    /**
                     * 设置Software installation directory.
                     * @param _installDir Software installation directory.
                     * 
                     */
                    void SetInstallDir(const std::string& _installDir);

                    /**
                     * 判断参数 InstallDir 是否已赋值
                     * @return InstallDir 是否已赋值
                     * 
                     */
                    bool InstallDirHasBeenSet() const;

                    /**
                     * 获取List of software details.
                     * @return DetailSet List of software details.
                     * 
                     */
                    std::vector<SoftwareDetail> GetDetailSet() const;

                    /**
                     * 设置List of software details.
                     * @param _detailSet List of software details.
                     * 
                     */
                    void SetDetailSet(const std::vector<SoftwareDetail>& _detailSet);

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                private:

                    /**
                     * Software name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Software version.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Software picture URL.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Software installation directory.
                     */
                    std::string m_installDir;
                    bool m_installDirHasBeenSet;

                    /**
                     * List of software details.
                     */
                    std::vector<SoftwareDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SOFTWARE_H_
