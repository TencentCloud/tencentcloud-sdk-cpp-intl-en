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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceConfigItem.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyInstanceKeyValConfigs request structure.
                */
                class ModifyInstanceKeyValConfigsRequest : public AbstractModel
                {
                public:
                    ModifyInstanceKeyValConfigsRequest();
                    ~ModifyInstanceKeyValConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Add configuration list
                     * @return AddItems Add configuration list
                     * 
                     */
                    std::vector<InstanceConfigItem> GetAddItems() const;

                    /**
                     * 设置Add configuration list
                     * @param _addItems Add configuration list
                     * 
                     */
                    void SetAddItems(const std::vector<InstanceConfigItem>& _addItems);

                    /**
                     * 判断参数 AddItems 是否已赋值
                     * @return AddItems 是否已赋值
                     * 
                     */
                    bool AddItemsHasBeenSet() const;

                    /**
                     * 获取Update configuration list
                     * @return UpdateItems Update configuration list
                     * 
                     */
                    std::vector<InstanceConfigItem> GetUpdateItems() const;

                    /**
                     * 设置Update configuration list
                     * @param _updateItems Update configuration list
                     * 
                     */
                    void SetUpdateItems(const std::vector<InstanceConfigItem>& _updateItems);

                    /**
                     * 判断参数 UpdateItems 是否已赋值
                     * @return UpdateItems 是否已赋值
                     * 
                     */
                    bool UpdateItemsHasBeenSet() const;

                    /**
                     * 获取Delete configuration list
                     * @return DelItems Delete configuration list
                     * 
                     */
                    std::vector<InstanceConfigItem> GetDelItems() const;

                    /**
                     * 设置Delete configuration list
                     * @param _delItems Delete configuration list
                     * 
                     */
                    void SetDelItems(const std::vector<InstanceConfigItem>& _delItems);

                    /**
                     * 判断参数 DelItems 是否已赋值
                     * @return DelItems 是否已赋值
                     * 
                     */
                    bool DelItemsHasBeenSet() const;

                    /**
                     * 获取Remarks (within 50 words)
                     * @return Message Remarks (within 50 words)
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Remarks (within 50 words)
                     * @param _message Remarks (within 50 words)
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Hot update list
                     * @return HotUpdateItems Hot update list
                     * 
                     */
                    std::vector<InstanceConfigItem> GetHotUpdateItems() const;

                    /**
                     * 设置Hot update list
                     * @param _hotUpdateItems Hot update list
                     * 
                     */
                    void SetHotUpdateItems(const std::vector<InstanceConfigItem>& _hotUpdateItems);

                    /**
                     * 判断参数 HotUpdateItems 是否已赋值
                     * @return HotUpdateItems 是否已赋值
                     * 
                     */
                    bool HotUpdateItemsHasBeenSet() const;

                    /**
                     * 获取Delete configuration list
                     * @return DeleteItems Delete configuration list
                     * 
                     */
                    InstanceConfigItem GetDeleteItems() const;

                    /**
                     * 设置Delete configuration list
                     * @param _deleteItems Delete configuration list
                     * 
                     */
                    void SetDeleteItems(const InstanceConfigItem& _deleteItems);

                    /**
                     * 判断参数 DeleteItems 是否已赋值
                     * @return DeleteItems 是否已赋值
                     * 
                     */
                    bool DeleteItemsHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return IPAddress IP address
                     * 
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置IP address
                     * @param _iPAddress IP address
                     * 
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     * 
                     */
                    bool IPAddressHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Add configuration list
                     */
                    std::vector<InstanceConfigItem> m_addItems;
                    bool m_addItemsHasBeenSet;

                    /**
                     * Update configuration list
                     */
                    std::vector<InstanceConfigItem> m_updateItems;
                    bool m_updateItemsHasBeenSet;

                    /**
                     * Delete configuration list
                     */
                    std::vector<InstanceConfigItem> m_delItems;
                    bool m_delItemsHasBeenSet;

                    /**
                     * Remarks (within 50 words)
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Hot update list
                     */
                    std::vector<InstanceConfigItem> m_hotUpdateItems;
                    bool m_hotUpdateItemsHasBeenSet;

                    /**
                     * Delete configuration list
                     */
                    InstanceConfigItem m_deleteItems;
                    bool m_deleteItemsHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_
