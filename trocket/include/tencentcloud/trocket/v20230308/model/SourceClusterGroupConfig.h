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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Specifies the consumer group configuration information.
                */
                class SourceClusterGroupConfig : public AbstractModel
                {
                public:
                    SourceClusterGroupConfig();
                    ~SourceClusterGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer group name. It can be obtained from [SourceClusterGroupConfig](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) returned by the API [DescribeSourceClusterGroupList](https://www.tencentcloud.com/document/api/1493/118006?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Consumer group name. It can be obtained from [SourceClusterGroupConfig](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) returned by the API [DescribeSourceClusterGroupList](https://www.tencentcloud.com/document/api/1493/118006?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Consumer group name. It can be obtained from [SourceClusterGroupConfig](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) returned by the API [DescribeSourceClusterGroupList](https://www.tencentcloud.com/document/api/1493/118006?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName Consumer group name. It can be obtained from [SourceClusterGroupConfig](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) returned by the API [DescribeSourceClusterGroupList](https://www.tencentcloud.com/document/api/1493/118006?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Specifies whether it has been imported. it is unavailable when used as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Imported Specifies whether it has been imported. it is unavailable when used as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetImported() const;

                    /**
                     * 设置Specifies whether it has been imported. it is unavailable when used as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imported Specifies whether it has been imported. it is unavailable when used as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImported(const bool& _imported);

                    /**
                     * 判断参数 Imported 是否已赋值
                     * @return Imported 是否已赋值
                     * 
                     */
                    bool ImportedHasBeenSet() const;

                    /**
                     * 获取Namespace, valid for 4.x clusters only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace, valid for 4.x clusters only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace, valid for 4.x clusters only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespace Namespace, valid for 4.x clusters only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Import status.
Unknown. specifies an unknown status.
Success.
Failure.
AlreadyExists. specifies the resource already exists.

Used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImportStatus Import status.
Unknown. specifies an unknown status.
Success.
Failure.
AlreadyExists. specifies the resource already exists.

Used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImportStatus() const;

                    /**
                     * 设置Import status.
Unknown. specifies an unknown status.
Success.
Failure.
AlreadyExists. specifies the resource already exists.

Used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _importStatus Import status.
Unknown. specifies an unknown status.
Success.
Failure.
AlreadyExists. specifies the resource already exists.

Used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImportStatus(const std::string& _importStatus);

                    /**
                     * 判断参数 ImportStatus 是否已赋值
                     * @return ImportStatus 是否已赋值
                     * 
                     */
                    bool ImportStatusHasBeenSet() const;

                    /**
                     * 获取Namespace of 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceV4 Namespace of 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置Namespace of 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceV4 Namespace of 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取Consumer group name for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupNameV4 Consumer group name for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupNameV4() const;

                    /**
                     * 设置Consumer group name for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupNameV4 Consumer group name for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupNameV4(const std::string& _groupNameV4);

                    /**
                     * 判断参数 GroupNameV4 是否已赋值
                     * @return GroupNameV4 是否已赋值
                     * 
                     */
                    bool GroupNameV4HasBeenSet() const;

                    /**
                     * 获取Complete namespace for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNamespaceV4 Complete namespace for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置Complete namespace for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNamespaceV4 Complete namespace for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取Specifies whether it is ordered delivery. valid value: 5.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumeMessageOrderly Specifies whether it is ordered delivery. valid value: 5.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置Specifies whether it is ordered delivery. valid value: 5.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumeMessageOrderly Specifies whether it is ordered delivery. valid value: 5.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                private:

                    /**
                     * Consumer group name. It can be obtained from [SourceClusterGroupConfig](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SourceClusterGroupConfig) returned by the API [DescribeSourceClusterGroupList](https://www.tencentcloud.com/document/api/1493/118006?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Remarks

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies whether it has been imported. it is unavailable when used as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_imported;
                    bool m_importedHasBeenSet;

                    /**
                     * Namespace, valid for 4.x clusters only.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Import status.
Unknown. specifies an unknown status.
Success.
Failure.
AlreadyExists. specifies the resource already exists.

Used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_importStatus;
                    bool m_importStatusHasBeenSet;

                    /**
                     * Namespace of 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * Consumer group name for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupNameV4;
                    bool m_groupNameV4HasBeenSet;

                    /**
                     * Complete namespace for version 4.x. output usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * Specifies whether it is ordered delivery. valid value: 5.0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERGROUPCONFIG_H_
