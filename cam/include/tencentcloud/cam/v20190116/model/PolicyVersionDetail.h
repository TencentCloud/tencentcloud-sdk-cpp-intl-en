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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Policy version details
                */
                class PolicyVersionDetail : public AbstractModel
                {
                public:
                    PolicyVersionDetail();
                    ~PolicyVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionId Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVersionId() const;

                    /**
                     * 设置Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _versionId Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionId(const uint64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Policy version creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateDate Policy version creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Policy version creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createDate Policy version creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Whether it is the operative version. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDefaultVersion Whether it is the operative version. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsDefaultVersion() const;

                    /**
                     * 设置Whether it is the operative version. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isDefaultVersion Whether it is the operative version. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefaultVersion(const uint64_t& _isDefaultVersion);

                    /**
                     * 判断参数 IsDefaultVersion 是否已赋值
                     * @return IsDefaultVersion 是否已赋值
                     * 
                     */
                    bool IsDefaultVersionHasBeenSet() const;

                    /**
                     * 获取Policy syntax text
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Document Policy syntax text
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置Policy syntax text
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _document Policy syntax text
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                private:

                    /**
                     * Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Policy version creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Whether it is the operative version. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isDefaultVersion;
                    bool m_isDefaultVersionHasBeenSet;

                    /**
                     * Policy syntax text
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONDETAIL_H_
