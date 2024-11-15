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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CUDNN_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CUDNN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * cuDNN version information
                */
                class CUDNN : public AbstractModel
                {
                public:
                    CUDNN();
                    ~CUDNN() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cuDNN version

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Version cuDNN version

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置cuDNN version

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _version cuDNN version

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取cuDNN name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Name cuDNN name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置cuDNN name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _name cuDNN name

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Doc name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DocName Doc name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置Doc name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _docName Doc name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDocName(const std::string& _docName);

                    /**
                     * 判断参数 DocName 是否已赋值
                     * @return DocName 是否已赋值
                     * 
                     */
                    bool DocNameHasBeenSet() const;

                    /**
                     * 获取Dev name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DevName Dev name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDevName() const;

                    /**
                     * 设置Dev name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _devName Dev name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDevName(const std::string& _devName);

                    /**
                     * 判断参数 DevName 是否已赋值
                     * @return DevName 是否已赋值
                     * 
                     */
                    bool DevNameHasBeenSet() const;

                private:

                    /**
                     * cuDNN version

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * cuDNN name

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Doc name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * Dev name of cuDNN

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_devName;
                    bool m_devNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CUDNN_H_
