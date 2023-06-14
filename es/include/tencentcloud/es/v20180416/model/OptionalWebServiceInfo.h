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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * The information of optional web components
                */
                class OptionalWebServiceInfo : public AbstractModel
                {
                public:
                    OptionalWebServiceInfo();
                    ~OptionalWebServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Public URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicUrl Public URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicUrl() const;

                    /**
                     * 设置Public URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicUrl Public URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicUrl(const std::string& _publicUrl);

                    /**
                     * 判断参数 PublicUrl 是否已赋值
                     * @return PublicUrl 是否已赋值
                     * 
                     */
                    bool PublicUrlHasBeenSet() const;

                    /**
                     * 获取Private URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateUrl Private URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateUrl() const;

                    /**
                     * 设置Private URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateUrl Private URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateUrl(const std::string& _privateUrl);

                    /**
                     * 判断参数 PrivateUrl 是否已赋值
                     * @return PrivateUrl 是否已赋值
                     * 
                     */
                    bool PrivateUrlHasBeenSet() const;

                    /**
                     * 获取Public network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccess Public network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置Public network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccess Public network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取Private network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateAccess Private network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Private network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateAccess Private network access
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Public URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicUrl;
                    bool m_publicUrlHasBeenSet;

                    /**
                     * Private URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateUrl;
                    bool m_privateUrlHasBeenSet;

                    /**
                     * Public network access
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * Private network access
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPTIONALWEBSERVICEINFO_H_
