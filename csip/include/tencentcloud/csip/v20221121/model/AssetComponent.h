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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCOMPONENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Component information in an asset
                */
                class AssetComponent : public AbstractModel
                {
                public:
                    AssetComponent();
                    ~AssetComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Component name.</p>
                     * @return Name <p>Component name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Component name.</p>
                     * @param _name <p>Component name.</p>
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
                     * 获取<p>Component version</p>
                     * @return Version <p>Component version</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Component version</p>
                     * @param _version <p>Component version</p>
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
                     * 获取<p>Component type</p>
                     * @return Type <p>Component type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Component type</p>
                     * @param _type <p>Component type</p>
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
                     * 获取<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstFoundTime() const;

                    /**
                     * 设置<p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstFoundTime <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstFoundTime(const std::string& _firstFoundTime);

                    /**
                     * 判断参数 FirstFoundTime 是否已赋值
                     * @return FirstFoundTime 是否已赋值
                     * 
                     */
                    bool FirstFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestFoundTime <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestFoundTime <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Component id</p>
                     * @return Id <p>Component id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Component id</p>
                     * @param _id <p>Component id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Component associated account name</p>
                     * @return OwnerAccountName <p>Component associated account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Component associated account name</p>
                     * @param _ownerAccountName <p>Component associated account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>appid of the account associated with the component</p>
                     * @return OwnerAppId <p>appid of the account associated with the component</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the component</p>
                     * @param _ownerAppId <p>appid of the account associated with the component</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Account uin associated with the component</p>
                     * @return OwnerUin <p>Account uin associated with the component</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Account uin associated with the component</p>
                     * @param _ownerUin <p>Account uin associated with the component</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Numbers of affected images</p>
                     * @return AffectedImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    uint64_t GetAffectedImageCount() const;

                    /**
                     * 设置<p>Numbers of affected images</p>
                     * @param _affectedImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    void SetAffectedImageCount(const uint64_t& _affectedImageCount);

                    /**
                     * 判断参数 AffectedImageCount 是否已赋值
                     * @return AffectedImageCount 是否已赋值
                     * 
                     */
                    bool AffectedImageCountHasBeenSet() const;

                private:

                    /**
                     * <p>Component name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Component version</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Component type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>First discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstFoundTime;
                    bool m_firstFoundTimeHasBeenSet;

                    /**
                     * <p>Last discovery time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>Component id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Component associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>appid of the account associated with the component</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Account uin associated with the component</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Numbers of affected images</p>
                     */
                    uint64_t m_affectedImageCount;
                    bool m_affectedImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCOMPONENT_H_
