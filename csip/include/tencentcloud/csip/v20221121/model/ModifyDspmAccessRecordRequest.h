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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAccessRecordId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAccessRecord request structure.
                */
                class ModifyDspmAccessRecordRequest : public AbstractModel
                {
                public:
                    ModifyDspmAccessRecordRequest();
                    ~ModifyDspmAccessRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Source IP
                     * @return Id Source IP
                     * 
                     */
                    std::vector<DspmAccessRecordId> GetId() const;

                    /**
                     * 设置Source IP
                     * @param _id Source IP
                     * 
                     */
                    void SetId(const std::vector<DspmAccessRecordId>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取View. ip or instance.
                     * @return View View. ip or instance.
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置View. ip or instance.
                     * @param _view View. ip or instance.
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取Read tag. 1 - Read
                     * @return Noted Read tag. 1 - Read
                     * 
                     */
                    int64_t GetNoted() const;

                    /**
                     * 设置Read tag. 1 - Read
                     * @param _noted Read tag. 1 - Read
                     * 
                     */
                    void SetNoted(const int64_t& _noted);

                    /**
                     * 判断参数 Noted 是否已赋值
                     * @return Noted 是否已赋值
                     * 
                     */
                    bool NotedHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Source IP
                     */
                    std::vector<DspmAccessRecordId> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * View. ip or instance.
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * Read tag. 1 - Read
                     */
                    int64_t m_noted;
                    bool m_notedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMACCESSRECORDREQUEST_H_
