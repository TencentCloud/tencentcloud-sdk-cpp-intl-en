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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppIdentity.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Reference abstract (for detail page display, corresponding to DB t_skill_reference)
                */
                class SkillReferenceSummary : public AbstractModel
                {
                public:
                    SkillReferenceSummary();
                    ~SkillReferenceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Associated ID</p>
                     * @return ReferenceId <p>Associated ID</p>
                     * 
                     */
                    std::string GetReferenceId() const;

                    /**
                     * 设置<p>Associated ID</p>
                     * @param _referenceId <p>Associated ID</p>
                     * 
                     */
                    void SetReferenceId(const std::string& _referenceId);

                    /**
                     * 判断参数 ReferenceId 是否已赋值
                     * @return ReferenceId 是否已赋值
                     * 
                     */
                    bool ReferenceIdHasBeenSet() const;

                    /**
                     * 获取<p>Association name</p>
                     * @return ReferenceName <p>Association name</p>
                     * 
                     */
                    std::string GetReferenceName() const;

                    /**
                     * 设置<p>Association name</p>
                     * @param _referenceName <p>Association name</p>
                     * 
                     */
                    void SetReferenceName(const std::string& _referenceName);

                    /**
                     * 判断参数 ReferenceName 是否已赋值
                     * @return ReferenceName 是否已赋值
                     * 
                     */
                    bool ReferenceNameHasBeenSet() const;

                    /**
                     * 获取<p>Association type</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Placeholder |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * @return ReferenceType <p>Association type</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Placeholder |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * 
                     */
                    int64_t GetReferenceType() const;

                    /**
                     * 设置<p>Association type</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Placeholder |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * @param _referenceType <p>Association type</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Placeholder |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     * 
                     */
                    void SetReferenceType(const int64_t& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Space ID</p>
                     * @return SpaceId <p>Space ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID</p>
                     * @param _spaceId <p>Space ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Space name</p>
                     * @return SpaceName <p>Space name</p>
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置<p>Space name</p>
                     * @param _spaceName <p>Space name</p>
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取<p>Reference instance owner</p>
                     * @return Owner <p>Reference instance owner</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>Reference instance owner</p>
                     * @param _owner <p>Reference instance owner</p>
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>Application identifier</p>
                     * @return AppIdentity <p>Application identifier</p>
                     * 
                     */
                    AppIdentity GetAppIdentity() const;

                    /**
                     * 设置<p>Application identifier</p>
                     * @param _appIdentity <p>Application identifier</p>
                     * 
                     */
                    void SetAppIdentity(const AppIdentity& _appIdentity);

                    /**
                     * 判断参数 AppIdentity 是否已赋值
                     * @return AppIdentity 是否已赋值
                     * 
                     */
                    bool AppIdentityHasBeenSet() const;

                private:

                    /**
                     * <p>Associated ID</p>
                     */
                    std::string m_referenceId;
                    bool m_referenceIdHasBeenSet;

                    /**
                     * <p>Association name</p>
                     */
                    std::string m_referenceName;
                    bool m_referenceNameHasBeenSet;

                    /**
                     * <p>Association type</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Placeholder |<br>| 1 | ClawPro |<br>| 2 | agent |</p>
                     */
                    int64_t m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Space ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Space name</p>
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * <p>Reference instance owner</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>Application identifier</p>
                     */
                    AppIdentity m_appIdentity;
                    bool m_appIdentityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLREFERENCESUMMARY_H_
