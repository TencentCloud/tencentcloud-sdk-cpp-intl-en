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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm identity id information
                */
                class DspmIdentifyIdItem : public AbstractModel
                {
                public:
                    DspmIdentifyIdItem();
                    ~DspmIdentifyIdItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identity id.
                     * @return IdentifyId Identity id.
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置Identity id.
                     * @param _identifyId Identity id.
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @return IdentifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @param _identifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取User belonging to the cloud account uin.
                     * @return OwnerUin User belonging to the cloud account uin.
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置User belonging to the cloud account uin.
                     * @param _ownerUin User belonging to the cloud account uin.
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Creator account uin user.
                     * @return CreatorUin Creator account uin user.
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置Creator account uin user.
                     * @param _creatorUin Creator account uin user.
                     * 
                     */
                    void SetCreatorUin(const DspmUinUser& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Status. 0: inactive; 1: active
                     * @return Status Status. 0: inactive; 1: active
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: inactive; 1: active
                     * @param _status Status. 0: inactive; 1: active
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
                     * 获取Information of the personal user it belongs to
                     * @return Person Information of the personal user it belongs to
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置Information of the personal user it belongs to
                     * @param _person Information of the personal user it belongs to
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                private:

                    /**
                     * Identity id.
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * User belonging to the cloud account uin.
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator account uin user.
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status. 0: inactive; 1: active
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Information of the personal user it belongs to
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_
